# Inter_MonitorCallGuildAllMembers

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084cabda Inter_MonitorCallGuildAllMembers::dispatch_sig  [0x084cabda-0x84cae09] ===
 84cabda:	55                   	push   %ebp
 84cabdb:	89 e5                	mov    %esp,%ebp
 84cabdd:	56                   	push   %esi
 84cabde:	53                   	push   %ebx
 84cabdf:	83 ec 40             	sub    $0x40,%esp
 84cabe2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cabe5:	89 04 24             	mov    %eax,(%esp)
 84cabe8:	e8 9f f7 c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84cabed:	85 c0                	test   %eax,%eax
 84cabef:	0f 94 c0             	sete   %al
 84cabf2:	84 c0                	test   %al,%al
 84cabf4:	74 0a                	je     84cac00 <_ZN32Inter_MonitorCallGuildAllMembers12dispatch_sigEP5CUserPci+0x26>
 84cabf6:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cabfb:	e9 01 02 00 00       	jmp    84cae01 <_ZN32Inter_MonitorCallGuildAllMembers12dispatch_sigEP5CUserPci+0x227>
 84cac00:	8b 45 10             	mov    0x10(%ebp),%eax
 84cac03:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84cac06:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cac0d:	ff 
 84cac0e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cac11:	89 04 24             	mov    %eax,(%esp)
 84cac14:	e8 87 33 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84cac19:	89 c2                	mov    %eax,%edx
 84cac1b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cac1e:	8b 40 0e             	mov    0xe(%eax),%eax
 84cac21:	39 c2                	cmp    %eax,%edx
 84cac23:	0f 95 c0             	setne  %al
 84cac26:	84 c0                	test   %al,%al
 84cac28:	74 57                	je     84cac81 <_ZN32Inter_MonitorCallGuildAllMembers12dispatch_sigEP5CUserPci+0xa7>
 84cac2a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cac2d:	8b 58 0e             	mov    0xe(%eax),%ebx
 84cac30:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cac37:	ff 
 84cac38:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cac3b:	89 04 24             	mov    %eax,(%esp)
 84cac3e:	e8 5d 33 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84cac43:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84cac47:	89 44 24 14          	mov    %eax,0x14(%esp)
 84cac4b:	c7 44 24 10 04 7f c8 	movl   $0x8c87f04,0x10(%esp)
 84cac52:	08 
 84cac53:	c7 44 24 0c 0c 25 00 	movl   $0x250c,0xc(%esp)
 84cac5a:	00 
 84cac5b:	c7 44 24 08 60 d7 c8 	movl   $0x8c8d760,0x8(%esp)
 84cac62:	08 
 84cac63:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84cac6a:	08 
 84cac6b:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84cac72:	e8 93 8f 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84cac77:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cac7c:	e9 80 01 00 00       	jmp    84cae01 <_ZN32Inter_MonitorCallGuildAllMembers12dispatch_sigEP5CUserPci+0x227>
 84cac81:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cac84:	89 04 24             	mov    %eax,(%esp)
 84cac87:	e8 e0 47 d6 ff       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 84cac8c:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84cac8f:	8b 52 12             	mov    0x12(%edx),%edx
 84cac92:	39 d0                	cmp    %edx,%eax
 84cac94:	0f 95 c0             	setne  %al
 84cac97:	84 c0                	test   %al,%al
 84cac99:	74 36                	je     84cacd1 <_ZN32Inter_MonitorCallGuildAllMembers12dispatch_sigEP5CUserPci+0xf7>
 84cac9b:	c7 44 24 10 68 7f c8 	movl   $0x8c87f68,0x10(%esp)
 84caca2:	08 
 84caca3:	c7 44 24 0c 12 25 00 	movl   $0x2512,0xc(%esp)
 84cacaa:	00 
 84cacab:	c7 44 24 08 60 d7 c8 	movl   $0x8c8d760,0x8(%esp)
 84cacb2:	08 
 84cacb3:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84cacba:	08 
 84cacbb:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84cacc2:	e8 43 8f 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84cacc7:	bb 00 00 00 00       	mov    $0x0,%ebx
 84caccc:	e9 30 01 00 00       	jmp    84cae01 <_ZN32Inter_MonitorCallGuildAllMembers12dispatch_sigEP5CUserPci+0x227>
 84cacd1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cacd4:	89 04 24             	mov    %eax,(%esp)
 84cacd7:	e8 70 30 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84cacdc:	c7 44 24 08 8f 00 00 	movl   $0x8f,0x8(%esp)
 84cace3:	00 
 84cace4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84caceb:	00 
 84cacec:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cacef:	89 04 24             	mov    %eax,(%esp)
 84cacf2:	e8 05 0c c0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84cacf7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cacfe:	00 
 84cacff:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cad02:	89 04 24             	mov    %eax,(%esp)
 84cad05:	e8 16 0c c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cad0a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cad0d:	8b 40 12             	mov    0x12(%eax),%eax
 84cad10:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cad14:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cad17:	89 04 24             	mov    %eax,(%esp)
 84cad1a:	e8 1d 0c c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84cad1f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cad22:	83 c0 16             	add    $0x16,%eax
 84cad25:	89 04 24             	mov    %eax,(%esp)
 84cad28:	e8 83 36 bb ff       	call   807e3b0 <strlen@plt>
 84cad2d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84cad30:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cad33:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cad37:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cad3a:	89 04 24             	mov    %eax,(%esp)
 84cad3d:	e8 fa 0b c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84cad42:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cad45:	8d 50 16             	lea    0x16(%eax),%edx
 84cad48:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cad4b:	89 44 24 08          	mov    %eax,0x8(%esp)
 84cad4f:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cad53:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cad56:	89 04 24             	mov    %eax,(%esp)
 84cad59:	e8 86 c6 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84cad5e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cad61:	8b 40 2d             	mov    0x2d(%eax),%eax
 84cad64:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cad68:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cad6b:	89 04 24             	mov    %eax,(%esp)
 84cad6e:	e8 c9 0b c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84cad73:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cad76:	0f b7 40 31          	movzwl 0x31(%eax),%eax
 84cad7a:	0f b7 c0             	movzwl %ax,%eax
 84cad7d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cad81:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cad84:	89 04 24             	mov    %eax,(%esp)
 84cad87:	e8 18 f1 c0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84cad8c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cad8f:	8d 50 34             	lea    0x34(%eax),%edx
 84cad92:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cad95:	0f b6 40 33          	movzbl 0x33(%eax),%eax
 84cad99:	0f b6 c0             	movzbl %al,%eax
 84cad9c:	89 54 24 08          	mov    %edx,0x8(%esp)
 84cada0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cada4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cada7:	89 04 24             	mov    %eax,(%esp)
 84cadaa:	e8 cb f5 ff ff       	call   84ca37a <_ZN19FunctionGuildMember26MakePacketGuildMembersInfoER11PacketGuardiP17ST_Guild_Mem_Info>
 84cadaf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cadb6:	00 
 84cadb7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cadba:	89 04 24             	mov    %eax,(%esp)
 84cadbd:	e8 96 0b c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84cadc2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cadc5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cadc9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cadcc:	89 04 24             	mov    %eax,(%esp)
 84cadcf:	e8 e6 d7 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84cadd4:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cadd9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84caddc:	89 04 24             	mov    %eax,(%esp)
 84caddf:	e8 9c 30 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cade4:	eb 1b                	jmp    84cae01 <_ZN32Inter_MonitorCallGuildAllMembers12dispatch_sigEP5CUserPci+0x227>
 84cade6:	89 d3                	mov    %edx,%ebx
 84cade8:	89 c6                	mov    %eax,%esi
 84cadea:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84caded:	89 04 24             	mov    %eax,(%esp)
 84cadf0:	e8 8b 30 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cadf5:	89 f0                	mov    %esi,%eax
 84cadf7:	89 da                	mov    %ebx,%edx
 84cadf9:	89 04 24             	mov    %eax,(%esp)
 84cadfc:	e8 4f 89 61 00       	call   8ae3750 <_Unwind_Resume>
 84cae01:	89 d8                	mov    %ebx,%eax
 84cae03:	83 c4 40             	add    $0x40,%esp
 84cae06:	5b                   	pop    %ebx
 84cae07:	5e                   	pop    %esi
 84cae08:	5d                   	pop    %ebp
 84cae09:	c3                   	ret

```

```c
// Inter_MonitorCallGuildAllMembers::dispatch_sig @ 0x84cabda

/* Inter_MonitorCallGuildAllMembers::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorCallGuildAllMembers::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
                    /* try { // try from 084cacf2 to 084cadd3 has its CatchHandler @ 084cade6 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x8f);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x12));
        local_10 = strlen((char *)(local_14 + 0x16));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x16),local_10);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x2d));
        InterfacePacketBuf::put_short
                  ((InterfacePacketBuf *)local_20,(uint)*(ushort *)(local_14 + 0x31));
        FunctionGuildMember::MakePacketGuildMembersInfo
                  (local_20,(uint)*(byte *)(local_14 + 0x33),(ST_Guild_Mem_Info *)(local_14 + 0x34))
        ;
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
        CUser::Send((CUser *)param_2,local_20);
        PacketGuard::~PacketGuard(local_20);
      }
      else {
        LogManager::logFormat
                  (1,"InterDispatcher.cpp",
                   "virtual int Inter_MonitorCallGuildAllMembers::dispatch_sig(CUser*, char*, int)",
                   0x2512,
                   "Inter_MonitorCallGuildAllMembers::dispatch_sig() : pUser->get_charac_guildkey() != recv->m_uGuildKey"
                  );
      }
    }
    else {
      uVar1 = *(undefined4 *)(local_14 + 0xe);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorCallGuildAllMembers::dispatch_sig(CUser*, char*, int)",
                 0x250c,
                 "Inter_MonitorCallGuildAllMembers::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}

```

