# Inter_MonitorGuildWarInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084ce7f6 Inter_MonitorGuildWarInfo::dispatch_sig  [0x084ce7f6-0x84cea91] ===
 84ce7f6:	55                   	push   %ebp
 84ce7f7:	89 e5                	mov    %esp,%ebp
 84ce7f9:	56                   	push   %esi
 84ce7fa:	53                   	push   %ebx
 84ce7fb:	83 ec 40             	sub    $0x40,%esp
 84ce7fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ce801:	89 04 24             	mov    %eax,(%esp)
 84ce804:	e8 83 bb c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84ce809:	85 c0                	test   %eax,%eax
 84ce80b:	0f 94 c0             	sete   %al
 84ce80e:	84 c0                	test   %al,%al
 84ce810:	74 0a                	je     84ce81c <_ZN25Inter_MonitorGuildWarInfo12dispatch_sigEP5CUserPci+0x26>
 84ce812:	bb 00 00 00 00       	mov    $0x0,%ebx
 84ce817:	e9 6c 02 00 00       	jmp    84cea88 <_ZN25Inter_MonitorGuildWarInfo12dispatch_sigEP5CUserPci+0x292>
 84ce81c:	e8 86 bb c0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84ce821:	89 04 24             	mov    %eax,(%esp)
 84ce824:	e8 f7 82 c4 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 84ce829:	83 f8 06             	cmp    $0x6,%eax
 84ce82c:	0f 95 c0             	setne  %al
 84ce82f:	84 c0                	test   %al,%al
 84ce831:	74 0a                	je     84ce83d <_ZN25Inter_MonitorGuildWarInfo12dispatch_sigEP5CUserPci+0x47>
 84ce833:	bb 00 00 00 00       	mov    $0x0,%ebx
 84ce838:	e9 4b 02 00 00       	jmp    84cea88 <_ZN25Inter_MonitorGuildWarInfo12dispatch_sigEP5CUserPci+0x292>
 84ce83d:	8b 45 10             	mov    0x10(%ebp),%eax
 84ce840:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84ce843:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84ce84a:	ff 
 84ce84b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ce84e:	89 04 24             	mov    %eax,(%esp)
 84ce851:	e8 4a f7 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84ce856:	89 c2                	mov    %eax,%edx
 84ce858:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84ce85b:	8b 40 0e             	mov    0xe(%eax),%eax
 84ce85e:	39 c2                	cmp    %eax,%edx
 84ce860:	0f 95 c0             	setne  %al
 84ce863:	84 c0                	test   %al,%al
 84ce865:	74 57                	je     84ce8be <_ZN25Inter_MonitorGuildWarInfo12dispatch_sigEP5CUserPci+0xc8>
 84ce867:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84ce86a:	8b 58 0e             	mov    0xe(%eax),%ebx
 84ce86d:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84ce874:	ff 
 84ce875:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ce878:	89 04 24             	mov    %eax,(%esp)
 84ce87b:	e8 20 f7 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84ce880:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84ce884:	89 44 24 14          	mov    %eax,0x14(%esp)
 84ce888:	c7 44 24 10 60 89 c8 	movl   $0x8c88960,0x10(%esp)
 84ce88f:	08 
 84ce890:	c7 44 24 0c d4 2a 00 	movl   $0x2ad4,0xc(%esp)
 84ce897:	00 
 84ce898:	c7 44 24 08 e0 cf c8 	movl   $0x8c8cfe0,0x8(%esp)
 84ce89f:	08 
 84ce8a0:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84ce8a7:	08 
 84ce8a8:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84ce8af:	e8 56 53 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84ce8b4:	bb 00 00 00 00       	mov    $0x0,%ebx
 84ce8b9:	e9 ca 01 00 00       	jmp    84cea88 <_ZN25Inter_MonitorGuildWarInfo12dispatch_sigEP5CUserPci+0x292>
 84ce8be:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84ce8c1:	89 04 24             	mov    %eax,(%esp)
 84ce8c4:	e8 83 f4 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84ce8c9:	c7 44 24 08 70 00 00 	movl   $0x70,0x8(%esp)
 84ce8d0:	00 
 84ce8d1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84ce8d8:	00 
 84ce8d9:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84ce8dc:	89 04 24             	mov    %eax,(%esp)
 84ce8df:	e8 18 d0 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84ce8e4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84ce8eb:	00 
 84ce8ec:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84ce8ef:	89 04 24             	mov    %eax,(%esp)
 84ce8f2:	e8 29 d0 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84ce8f7:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 84ce8fe:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 84ce905:	eb 25                	jmp    84ce92c <_ZN25Inter_MonitorGuildWarInfo12dispatch_sigEP5CUserPci+0x136>
 84ce907:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84ce90a:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 84ce90d:	89 d0                	mov    %edx,%eax
 84ce90f:	c1 e0 05             	shl    $0x5,%eax
 84ce912:	01 d0                	add    %edx,%eax
 84ce914:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84ce917:	83 c0 10             	add    $0x10,%eax
 84ce91a:	8b 40 02             	mov    0x2(%eax),%eax
 84ce91d:	85 c0                	test   %eax,%eax
 84ce91f:	74 06                	je     84ce927 <_ZN25Inter_MonitorGuildWarInfo12dispatch_sigEP5CUserPci+0x131>
 84ce921:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 84ce925:	eb 01                	jmp    84ce928 <_ZN25Inter_MonitorGuildWarInfo12dispatch_sigEP5CUserPci+0x132>
 84ce927:	90                   	nop
 84ce928:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 84ce92c:	83 7d ec 09          	cmpl   $0x9,-0x14(%ebp)
 84ce930:	0f 9e c0             	setle  %al
 84ce933:	84 c0                	test   %al,%al
 84ce935:	75 d0                	jne    84ce907 <_ZN25Inter_MonitorGuildWarInfo12dispatch_sigEP5CUserPci+0x111>
 84ce937:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84ce93a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ce93e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84ce941:	89 04 24             	mov    %eax,(%esp)
 84ce944:	e8 d7 cf bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84ce949:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84ce950:	e9 d0 00 00 00       	jmp    84cea25 <_ZN25Inter_MonitorGuildWarInfo12dispatch_sigEP5CUserPci+0x22f>
 84ce955:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84ce958:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 84ce95b:	89 d0                	mov    %edx,%eax
 84ce95d:	c1 e0 05             	shl    $0x5,%eax
 84ce960:	01 d0                	add    %edx,%eax
 84ce962:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84ce965:	83 c0 10             	add    $0x10,%eax
 84ce968:	8b 40 02             	mov    0x2(%eax),%eax
 84ce96b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ce96f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84ce972:	89 04 24             	mov    %eax,(%esp)
 84ce975:	e8 c2 cf bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84ce97a:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84ce97d:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 84ce980:	89 d0                	mov    %edx,%eax
 84ce982:	c1 e0 05             	shl    $0x5,%eax
 84ce985:	01 d0                	add    %edx,%eax
 84ce987:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84ce98a:	83 c0 10             	add    $0x10,%eax
 84ce98d:	8b 40 06             	mov    0x6(%eax),%eax
 84ce990:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ce994:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84ce997:	89 04 24             	mov    %eax,(%esp)
 84ce99a:	e8 9d cf bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84ce99f:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84ce9a2:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 84ce9a5:	89 d0                	mov    %edx,%eax
 84ce9a7:	c1 e0 05             	shl    $0x5,%eax
 84ce9aa:	01 d0                	add    %edx,%eax
 84ce9ac:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84ce9af:	83 c0 10             	add    $0x10,%eax
 84ce9b2:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 84ce9b6:	0f b7 c0             	movzwl %ax,%eax
 84ce9b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ce9bd:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84ce9c0:	89 04 24             	mov    %eax,(%esp)
 84ce9c3:	e8 dc b4 c0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84ce9c8:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84ce9cb:	89 d0                	mov    %edx,%eax
 84ce9cd:	c1 e0 05             	shl    $0x5,%eax
 84ce9d0:	01 d0                	add    %edx,%eax
 84ce9d2:	83 c0 10             	add    $0x10,%eax
 84ce9d5:	03 45 e4             	add    -0x1c(%ebp),%eax
 84ce9d8:	83 c0 0c             	add    $0xc,%eax
 84ce9db:	89 04 24             	mov    %eax,(%esp)
 84ce9de:	e8 cd f9 ba ff       	call   807e3b0 <strlen@plt>
 84ce9e3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84ce9e6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ce9e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ce9ed:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84ce9f0:	89 04 24             	mov    %eax,(%esp)
 84ce9f3:	e8 44 cf bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84ce9f8:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84ce9fb:	89 d0                	mov    %edx,%eax
 84ce9fd:	c1 e0 05             	shl    $0x5,%eax
 84cea00:	01 d0                	add    %edx,%eax
 84cea02:	83 c0 10             	add    $0x10,%eax
 84cea05:	03 45 e4             	add    -0x1c(%ebp),%eax
 84cea08:	8d 50 0c             	lea    0xc(%eax),%edx
 84cea0b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cea0e:	89 44 24 08          	mov    %eax,0x8(%esp)
 84cea12:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cea16:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cea19:	89 04 24             	mov    %eax,(%esp)
 84cea1c:	e8 c3 89 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84cea21:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84cea25:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cea28:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 84cea2b:	0f 9c c0             	setl   %al
 84cea2e:	84 c0                	test   %al,%al
 84cea30:	0f 85 1f ff ff ff    	jne    84ce955 <_ZN25Inter_MonitorGuildWarInfo12dispatch_sigEP5CUserPci+0x15f>
 84cea36:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cea3d:	00 
 84cea3e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cea41:	89 04 24             	mov    %eax,(%esp)
 84cea44:	e8 0f cf bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84cea49:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cea4c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cea50:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cea53:	89 04 24             	mov    %eax,(%esp)
 84cea56:	e8 5f 9b 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84cea5b:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cea60:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cea63:	89 04 24             	mov    %eax,(%esp)
 84cea66:	e8 15 f4 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cea6b:	eb 1b                	jmp    84cea88 <_ZN25Inter_MonitorGuildWarInfo12dispatch_sigEP5CUserPci+0x292>
 84cea6d:	89 d3                	mov    %edx,%ebx
 84cea6f:	89 c6                	mov    %eax,%esi
 84cea71:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84cea74:	89 04 24             	mov    %eax,(%esp)
 84cea77:	e8 04 f4 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cea7c:	89 f0                	mov    %esi,%eax
 84cea7e:	89 da                	mov    %ebx,%edx
 84cea80:	89 04 24             	mov    %eax,(%esp)
 84cea83:	e8 c8 4c 61 00       	call   8ae3750 <_Unwind_Resume>
 84cea88:	89 d8                	mov    %ebx,%eax
 84cea8a:	83 c4 40             	add    $0x40,%esp
 84cea8d:	5b                   	pop    %ebx
 84cea8e:	5e                   	pop    %esi
 84cea8f:	5d                   	pop    %ebp
 84cea90:	c3                   	ret
 84cea91:	90                   	nop

```

```c
// Inter_MonitorGuildWarInfo::dispatch_sig @ 0x84ce7f6

/* Inter_MonitorGuildWarInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorGuildWarInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  GameWorld *this;
  undefined4 uVar3;
  PacketGuard local_2c [12];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  size_t local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    this = (GameWorld *)G_GameWorld();
    iVar2 = GameWorld::GetChannelType(this);
    if (iVar2 == 6) {
      local_20 = param_3;
      iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
      if (iVar2 == *(int *)(local_20 + 0xe)) {
        PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 084ce8df to 084cea5a has its CatchHandler @ 084cea6d */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,0x70);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,1);
        local_1c = 0;
        for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
          if (*(int *)(local_20 + local_18 * 0x21 + 0x12) != 0) {
            local_1c = local_1c + 1;
          }
        }
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,local_1c);
        for (local_14 = 0; local_14 < local_1c; local_14 = local_14 + 1) {
          InterfacePacketBuf::put_int
                    ((InterfacePacketBuf *)local_2c,*(int *)(local_20 + local_14 * 0x21 + 0x12));
          InterfacePacketBuf::put_int
                    ((InterfacePacketBuf *)local_2c,*(int *)(local_20 + local_14 * 0x21 + 0x16));
          InterfacePacketBuf::put_short
                    ((InterfacePacketBuf *)local_2c,
                     (uint)*(ushort *)(local_20 + local_14 * 0x21 + 0x1a));
          local_10 = strlen((char *)(local_14 * 0x21 + local_20 + 0x1c));
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,local_10);
          InterfacePacketBuf::put_str
                    ((InterfacePacketBuf *)local_2c,(char *)(local_14 * 0x21 + local_20 + 0x1c),
                     local_10);
        }
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
        CUser::Send((CUser *)param_2,local_2c);
        PacketGuard::~PacketGuard(local_2c);
      }
      else {
        uVar1 = *(undefined4 *)(local_20 + 0xe);
        uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
        LogManager::logFormat
                  (1,"InterDispatcher.cpp",
                   "virtual int Inter_MonitorGuildWarInfo::dispatch_sig(CUser*, char*, int)",0x2ad4,
                   "GuildWarInfo : Inter_MonitorGuildWarInfo::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                   ,uVar3,uVar1);
      }
    }
  }
  return 0;
}

```

