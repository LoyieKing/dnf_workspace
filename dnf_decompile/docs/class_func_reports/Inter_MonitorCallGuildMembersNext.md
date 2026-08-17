# Inter_MonitorCallGuildMembersNext

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084caa16 Inter_MonitorCallGuildMembersNext::dispatch_sig  [0x084caa16-0x84cabd9] ===
 84caa16:	55                   	push   %ebp
 84caa17:	89 e5                	mov    %esp,%ebp
 84caa19:	56                   	push   %esi
 84caa1a:	53                   	push   %ebx
 84caa1b:	83 ec 30             	sub    $0x30,%esp
 84caa1e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84caa21:	89 04 24             	mov    %eax,(%esp)
 84caa24:	e8 63 f9 c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84caa29:	85 c0                	test   %eax,%eax
 84caa2b:	0f 94 c0             	sete   %al
 84caa2e:	84 c0                	test   %al,%al
 84caa30:	74 0a                	je     84caa3c <_ZN33Inter_MonitorCallGuildMembersNext12dispatch_sigEP5CUserPci+0x26>
 84caa32:	bb 00 00 00 00       	mov    $0x0,%ebx
 84caa37:	e9 94 01 00 00       	jmp    84cabd0 <_ZN33Inter_MonitorCallGuildMembersNext12dispatch_sigEP5CUserPci+0x1ba>
 84caa3c:	8b 45 10             	mov    0x10(%ebp),%eax
 84caa3f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84caa42:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84caa49:	ff 
 84caa4a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84caa4d:	89 04 24             	mov    %eax,(%esp)
 84caa50:	e8 4b 35 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84caa55:	89 c2                	mov    %eax,%edx
 84caa57:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84caa5a:	8b 40 0e             	mov    0xe(%eax),%eax
 84caa5d:	39 c2                	cmp    %eax,%edx
 84caa5f:	0f 95 c0             	setne  %al
 84caa62:	84 c0                	test   %al,%al
 84caa64:	74 57                	je     84caabd <_ZN33Inter_MonitorCallGuildMembersNext12dispatch_sigEP5CUserPci+0xa7>
 84caa66:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84caa69:	8b 58 0e             	mov    0xe(%eax),%ebx
 84caa6c:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84caa73:	ff 
 84caa74:	8b 45 0c             	mov    0xc(%ebp),%eax
 84caa77:	89 04 24             	mov    %eax,(%esp)
 84caa7a:	e8 21 35 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84caa7f:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84caa83:	89 44 24 14          	mov    %eax,0x14(%esp)
 84caa87:	c7 44 24 10 38 7e c8 	movl   $0x8c87e38,0x10(%esp)
 84caa8e:	08 
 84caa8f:	c7 44 24 0c e7 24 00 	movl   $0x24e7,0xc(%esp)
 84caa96:	00 
 84caa97:	c7 44 24 08 c0 d7 c8 	movl   $0x8c8d7c0,0x8(%esp)
 84caa9e:	08 
 84caa9f:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84caaa6:	08 
 84caaa7:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84caaae:	e8 57 91 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84caab3:	bb 00 00 00 00       	mov    $0x0,%ebx
 84caab8:	e9 13 01 00 00       	jmp    84cabd0 <_ZN33Inter_MonitorCallGuildMembersNext12dispatch_sigEP5CUserPci+0x1ba>
 84caabd:	8b 45 0c             	mov    0xc(%ebp),%eax
 84caac0:	89 04 24             	mov    %eax,(%esp)
 84caac3:	e8 a4 49 d6 ff       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 84caac8:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84caacb:	8b 52 12             	mov    0x12(%edx),%edx
 84caace:	39 d0                	cmp    %edx,%eax
 84caad0:	0f 95 c0             	setne  %al
 84caad3:	84 c0                	test   %al,%al
 84caad5:	74 36                	je     84cab0d <_ZN33Inter_MonitorCallGuildMembersNext12dispatch_sigEP5CUserPci+0xf7>
 84caad7:	c7 44 24 10 9c 7e c8 	movl   $0x8c87e9c,0x10(%esp)
 84caade:	08 
 84caadf:	c7 44 24 0c ed 24 00 	movl   $0x24ed,0xc(%esp)
 84caae6:	00 
 84caae7:	c7 44 24 08 c0 d7 c8 	movl   $0x8c8d7c0,0x8(%esp)
 84caaee:	08 
 84caaef:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84caaf6:	08 
 84caaf7:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84caafe:	e8 07 91 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84cab03:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cab08:	e9 c3 00 00 00       	jmp    84cabd0 <_ZN33Inter_MonitorCallGuildMembersNext12dispatch_sigEP5CUserPci+0x1ba>
 84cab0d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cab10:	89 04 24             	mov    %eax,(%esp)
 84cab13:	e8 34 32 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84cab18:	c7 44 24 08 8e 00 00 	movl   $0x8e,0x8(%esp)
 84cab1f:	00 
 84cab20:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cab27:	00 
 84cab28:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cab2b:	89 04 24             	mov    %eax,(%esp)
 84cab2e:	e8 c9 0d c0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84cab33:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cab3a:	00 
 84cab3b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cab3e:	89 04 24             	mov    %eax,(%esp)
 84cab41:	e8 da 0d c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cab46:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cab49:	8b 40 12             	mov    0x12(%eax),%eax
 84cab4c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cab50:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cab53:	89 04 24             	mov    %eax,(%esp)
 84cab56:	e8 e1 0d c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84cab5b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cab5e:	8d 50 17             	lea    0x17(%eax),%edx
 84cab61:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cab64:	0f b6 40 16          	movzbl 0x16(%eax),%eax
 84cab68:	0f b6 c0             	movzbl %al,%eax
 84cab6b:	89 54 24 08          	mov    %edx,0x8(%esp)
 84cab6f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cab73:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cab76:	89 04 24             	mov    %eax,(%esp)
 84cab79:	e8 fc f7 ff ff       	call   84ca37a <_ZN19FunctionGuildMember26MakePacketGuildMembersInfoER11PacketGuardiP17ST_Guild_Mem_Info>
 84cab7e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cab85:	00 
 84cab86:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cab89:	89 04 24             	mov    %eax,(%esp)
 84cab8c:	e8 c7 0d c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84cab91:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cab94:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cab98:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cab9b:	89 04 24             	mov    %eax,(%esp)
 84cab9e:	e8 17 da 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84caba3:	bb 00 00 00 00       	mov    $0x0,%ebx
 84caba8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cabab:	89 04 24             	mov    %eax,(%esp)
 84cabae:	e8 cd 32 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cabb3:	eb 1b                	jmp    84cabd0 <_ZN33Inter_MonitorCallGuildMembersNext12dispatch_sigEP5CUserPci+0x1ba>
 84cabb5:	89 d3                	mov    %edx,%ebx
 84cabb7:	89 c6                	mov    %eax,%esi
 84cabb9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cabbc:	89 04 24             	mov    %eax,(%esp)
 84cabbf:	e8 bc 32 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cabc4:	89 f0                	mov    %esi,%eax
 84cabc6:	89 da                	mov    %ebx,%edx
 84cabc8:	89 04 24             	mov    %eax,(%esp)
 84cabcb:	e8 80 8b 61 00       	call   8ae3750 <_Unwind_Resume>
 84cabd0:	89 d8                	mov    %ebx,%eax
 84cabd2:	83 c4 30             	add    $0x30,%esp
 84cabd5:	5b                   	pop    %ebx
 84cabd6:	5e                   	pop    %esi
 84cabd7:	5d                   	pop    %ebp
 84cabd8:	c3                   	ret
 84cabd9:	90                   	nop

```

```c
// Inter_MonitorCallGuildMembersNext::dispatch_sig @ 0x84caa16

/* Inter_MonitorCallGuildMembersNext::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorCallGuildMembersNext::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
                    /* try { // try from 084cab2e to 084caba2 has its CatchHandler @ 084cabb5 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x8e);
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
                   "virtual int Inter_MonitorCallGuildMembersNext::dispatch_sig(CUser*, char*, int)"
                   ,0x24ed,
                   "Inter_MonitorCallGuildMembersNext::dispatch_sig() : pUser->get_charac_guildkey() != recv->m_uGuildKey"
                  );
      }
    }
    else {
      uVar1 = *(undefined4 *)(local_10 + 0xe);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorCallGuildMembersNext::dispatch_sig(CUser*, char*, int)",
                 0x24e7,
                 "Inter_MonitorCallGuildMembersNext::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}

```

