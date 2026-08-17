# Inter_MonitorCallGuildAllMembersNext

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084cae0a Inter_MonitorCallGuildAllMembersNext::dispatch_sig  [0x084cae0a-0x84cafcd] ===
 84cae0a:	55                   	push   %ebp
 84cae0b:	89 e5                	mov    %esp,%ebp
 84cae0d:	56                   	push   %esi
 84cae0e:	53                   	push   %ebx
 84cae0f:	83 ec 30             	sub    $0x30,%esp
 84cae12:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cae15:	89 04 24             	mov    %eax,(%esp)
 84cae18:	e8 6f f5 c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84cae1d:	85 c0                	test   %eax,%eax
 84cae1f:	0f 94 c0             	sete   %al
 84cae22:	84 c0                	test   %al,%al
 84cae24:	74 0a                	je     84cae30 <_ZN36Inter_MonitorCallGuildAllMembersNext12dispatch_sigEP5CUserPci+0x26>
 84cae26:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cae2b:	e9 94 01 00 00       	jmp    84cafc4 <_ZN36Inter_MonitorCallGuildAllMembersNext12dispatch_sigEP5CUserPci+0x1ba>
 84cae30:	8b 45 10             	mov    0x10(%ebp),%eax
 84cae33:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84cae36:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cae3d:	ff 
 84cae3e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cae41:	89 04 24             	mov    %eax,(%esp)
 84cae44:	e8 57 31 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84cae49:	89 c2                	mov    %eax,%edx
 84cae4b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cae4e:	8b 40 0e             	mov    0xe(%eax),%eax
 84cae51:	39 c2                	cmp    %eax,%edx
 84cae53:	0f 95 c0             	setne  %al
 84cae56:	84 c0                	test   %al,%al
 84cae58:	74 57                	je     84caeb1 <_ZN36Inter_MonitorCallGuildAllMembersNext12dispatch_sigEP5CUserPci+0xa7>
 84cae5a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cae5d:	8b 58 0e             	mov    0xe(%eax),%ebx
 84cae60:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cae67:	ff 
 84cae68:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cae6b:	89 04 24             	mov    %eax,(%esp)
 84cae6e:	e8 2d 31 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84cae73:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84cae77:	89 44 24 14          	mov    %eax,0x14(%esp)
 84cae7b:	c7 44 24 10 d0 7f c8 	movl   $0x8c87fd0,0x10(%esp)
 84cae82:	08 
 84cae83:	c7 44 24 0c 39 25 00 	movl   $0x2539,0xc(%esp)
 84cae8a:	00 
 84cae8b:	c7 44 24 08 00 d7 c8 	movl   $0x8c8d700,0x8(%esp)
 84cae92:	08 
 84cae93:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84cae9a:	08 
 84cae9b:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84caea2:	e8 63 8d 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84caea7:	bb 00 00 00 00       	mov    $0x0,%ebx
 84caeac:	e9 13 01 00 00       	jmp    84cafc4 <_ZN36Inter_MonitorCallGuildAllMembersNext12dispatch_sigEP5CUserPci+0x1ba>
 84caeb1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84caeb4:	89 04 24             	mov    %eax,(%esp)
 84caeb7:	e8 b0 45 d6 ff       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 84caebc:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84caebf:	8b 52 12             	mov    0x12(%edx),%edx
 84caec2:	39 d0                	cmp    %edx,%eax
 84caec4:	0f 95 c0             	setne  %al
 84caec7:	84 c0                	test   %al,%al
 84caec9:	74 36                	je     84caf01 <_ZN36Inter_MonitorCallGuildAllMembersNext12dispatch_sigEP5CUserPci+0xf7>
 84caecb:	c7 44 24 10 38 80 c8 	movl   $0x8c88038,0x10(%esp)
 84caed2:	08 
 84caed3:	c7 44 24 0c 3f 25 00 	movl   $0x253f,0xc(%esp)
 84caeda:	00 
 84caedb:	c7 44 24 08 00 d7 c8 	movl   $0x8c8d700,0x8(%esp)
 84caee2:	08 
 84caee3:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84caeea:	08 
 84caeeb:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84caef2:	e8 13 8d 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84caef7:	bb 00 00 00 00       	mov    $0x0,%ebx
 84caefc:	e9 c3 00 00 00       	jmp    84cafc4 <_ZN36Inter_MonitorCallGuildAllMembersNext12dispatch_sigEP5CUserPci+0x1ba>
 84caf01:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84caf04:	89 04 24             	mov    %eax,(%esp)
 84caf07:	e8 40 2e 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84caf0c:	c7 44 24 08 90 00 00 	movl   $0x90,0x8(%esp)
 84caf13:	00 
 84caf14:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84caf1b:	00 
 84caf1c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84caf1f:	89 04 24             	mov    %eax,(%esp)
 84caf22:	e8 d5 09 c0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84caf27:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84caf2e:	00 
 84caf2f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84caf32:	89 04 24             	mov    %eax,(%esp)
 84caf35:	e8 e6 09 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84caf3a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84caf3d:	8b 40 12             	mov    0x12(%eax),%eax
 84caf40:	89 44 24 04          	mov    %eax,0x4(%esp)
 84caf44:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84caf47:	89 04 24             	mov    %eax,(%esp)
 84caf4a:	e8 ed 09 c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84caf4f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84caf52:	8d 50 17             	lea    0x17(%eax),%edx
 84caf55:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84caf58:	0f b6 40 16          	movzbl 0x16(%eax),%eax
 84caf5c:	0f b6 c0             	movzbl %al,%eax
 84caf5f:	89 54 24 08          	mov    %edx,0x8(%esp)
 84caf63:	89 44 24 04          	mov    %eax,0x4(%esp)
 84caf67:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84caf6a:	89 04 24             	mov    %eax,(%esp)
 84caf6d:	e8 08 f4 ff ff       	call   84ca37a <_ZN19FunctionGuildMember26MakePacketGuildMembersInfoER11PacketGuardiP17ST_Guild_Mem_Info>
 84caf72:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84caf79:	00 
 84caf7a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84caf7d:	89 04 24             	mov    %eax,(%esp)
 84caf80:	e8 d3 09 c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84caf85:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84caf88:	89 44 24 04          	mov    %eax,0x4(%esp)
 84caf8c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84caf8f:	89 04 24             	mov    %eax,(%esp)
 84caf92:	e8 23 d6 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84caf97:	bb 00 00 00 00       	mov    $0x0,%ebx
 84caf9c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84caf9f:	89 04 24             	mov    %eax,(%esp)
 84cafa2:	e8 d9 2e 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cafa7:	eb 1b                	jmp    84cafc4 <_ZN36Inter_MonitorCallGuildAllMembersNext12dispatch_sigEP5CUserPci+0x1ba>
 84cafa9:	89 d3                	mov    %edx,%ebx
 84cafab:	89 c6                	mov    %eax,%esi
 84cafad:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cafb0:	89 04 24             	mov    %eax,(%esp)
 84cafb3:	e8 c8 2e 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cafb8:	89 f0                	mov    %esi,%eax
 84cafba:	89 da                	mov    %ebx,%edx
 84cafbc:	89 04 24             	mov    %eax,(%esp)
 84cafbf:	e8 8c 87 61 00       	call   8ae3750 <_Unwind_Resume>
 84cafc4:	89 d8                	mov    %ebx,%eax
 84cafc6:	83 c4 30             	add    $0x30,%esp
 84cafc9:	5b                   	pop    %ebx
 84cafca:	5e                   	pop    %esi
 84cafcb:	5d                   	pop    %ebp
 84cafcc:	c3                   	ret
 84cafcd:	90                   	nop

```

```c
// Inter_MonitorCallGuildAllMembersNext::dispatch_sig @ 0x84cae0a

/* Inter_MonitorCallGuildAllMembersNext::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_MonitorCallGuildAllMembersNext::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_1c [12];
  int local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    local_10 = param_3;
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar2 == *(int *)(local_10 + 0xe)) {
      iVar2 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
      if (iVar2 == *(int *)(local_10 + 0x12)) {
        PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084caf22 to 084caf96 has its CatchHandler @ 084cafa9 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x90);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x12));
        FunctionGuildMember::MakePacketGuildMembersInfo
                  (local_1c,(uint)*(byte *)(local_10 + 0x16),(ST_Guild_Mem_Info *)(local_10 + 0x17))
        ;
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
        CUser::Send((CUser *)param_2,local_1c);
        PacketGuard::~PacketGuard(local_1c);
      }
      else {
        LogManager::logFormat
                  (1,"InterDispatcher.cpp",
                   "virtual int Inter_MonitorCallGuildAllMembersNext::dispatch_sig(CUser*, char*, int)"
                   ,0x253f,
                   "Inter_MonitorCallGuildAllMembersNext::dispatch_sig() : pUser->get_charac_guildkey() != recv->m_uGuildKey"
                  );
      }
    }
    else {
      uVar1 = *(undefined4 *)(local_10 + 0xe);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorCallGuildAllMembersNext::dispatch_sig(CUser*, char*, int)"
                 ,0x2539,
                 "Inter_MonitorCallGuildAllMembersNext::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}

```

