# Inter_MonitorNoticeGuildCreate

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084cbb94 Inter_MonitorNoticeGuildCreate::dispatch_sig  [0x084cbb94-0x84cbd25] ===
 84cbb94:	55                   	push   %ebp
 84cbb95:	89 e5                	mov    %esp,%ebp
 84cbb97:	56                   	push   %esi
 84cbb98:	53                   	push   %ebx
 84cbb99:	83 ec 40             	sub    $0x40,%esp
 84cbb9c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cbb9f:	89 04 24             	mov    %eax,(%esp)
 84cbba2:	e8 e5 e7 c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84cbba7:	85 c0                	test   %eax,%eax
 84cbba9:	0f 94 c0             	sete   %al
 84cbbac:	84 c0                	test   %al,%al
 84cbbae:	74 0a                	je     84cbbba <_ZN30Inter_MonitorNoticeGuildCreate12dispatch_sigEP5CUserPci+0x26>
 84cbbb0:	bb 7c 26 00 00       	mov    $0x267c,%ebx
 84cbbb5:	e9 62 01 00 00       	jmp    84cbd1c <_ZN30Inter_MonitorNoticeGuildCreate12dispatch_sigEP5CUserPci+0x188>
 84cbbba:	8b 45 10             	mov    0x10(%ebp),%eax
 84cbbbd:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84cbbc0:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cbbc7:	ff 
 84cbbc8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cbbcb:	89 04 24             	mov    %eax,(%esp)
 84cbbce:	e8 cd 23 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84cbbd3:	89 c2                	mov    %eax,%edx
 84cbbd5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cbbd8:	8b 40 0e             	mov    0xe(%eax),%eax
 84cbbdb:	39 c2                	cmp    %eax,%edx
 84cbbdd:	0f 95 c0             	setne  %al
 84cbbe0:	84 c0                	test   %al,%al
 84cbbe2:	74 57                	je     84cbc3b <_ZN30Inter_MonitorNoticeGuildCreate12dispatch_sigEP5CUserPci+0xa7>
 84cbbe4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cbbe7:	8b 58 0e             	mov    0xe(%eax),%ebx
 84cbbea:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cbbf1:	ff 
 84cbbf2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cbbf5:	89 04 24             	mov    %eax,(%esp)
 84cbbf8:	e8 a3 23 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84cbbfd:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84cbc01:	89 44 24 14          	mov    %eax,0x14(%esp)
 84cbc05:	c7 44 24 10 d0 81 c8 	movl   $0x8c881d0,0x10(%esp)
 84cbc0c:	08 
 84cbc0d:	c7 44 24 0c 82 26 00 	movl   $0x2682,0xc(%esp)
 84cbc14:	00 
 84cbc15:	c7 44 24 08 80 d5 c8 	movl   $0x8c8d580,0x8(%esp)
 84cbc1c:	08 
 84cbc1d:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84cbc24:	08 
 84cbc25:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84cbc2c:	e8 d9 7f 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84cbc31:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cbc36:	e9 e1 00 00 00       	jmp    84cbd1c <_ZN30Inter_MonitorNoticeGuildCreate12dispatch_sigEP5CUserPci+0x188>
 84cbc3b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cbc3e:	8b 50 0a             	mov    0xa(%eax),%edx
 84cbc41:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cbc44:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cbc48:	89 04 24             	mov    %eax,(%esp)
 84cbc4b:	e8 ce aa dd ff       	call   82a671e <_ZN15CUserCharacInfo19set_charac_guildkeyEj>
 84cbc50:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cbc53:	89 04 24             	mov    %eax,(%esp)
 84cbc56:	e8 f1 20 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84cbc5b:	c7 44 24 08 47 00 00 	movl   $0x47,0x8(%esp)
 84cbc62:	00 
 84cbc63:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cbc6a:	00 
 84cbc6b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cbc6e:	89 04 24             	mov    %eax,(%esp)
 84cbc71:	e8 86 fc bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84cbc76:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cbc79:	8b 40 0a             	mov    0xa(%eax),%eax
 84cbc7c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cbc80:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cbc83:	89 04 24             	mov    %eax,(%esp)
 84cbc86:	e8 b1 fc bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84cbc8b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cbc8e:	83 c0 12             	add    $0x12,%eax
 84cbc91:	89 04 24             	mov    %eax,(%esp)
 84cbc94:	e8 17 27 bb ff       	call   807e3b0 <strlen@plt>
 84cbc99:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84cbc9c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cbc9f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cbca3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cbca6:	89 04 24             	mov    %eax,(%esp)
 84cbca9:	e8 8e fc bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84cbcae:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cbcb1:	8d 50 12             	lea    0x12(%eax),%edx
 84cbcb4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cbcb7:	89 44 24 08          	mov    %eax,0x8(%esp)
 84cbcbb:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cbcbf:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cbcc2:	89 04 24             	mov    %eax,(%esp)
 84cbcc5:	e8 1a b7 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84cbcca:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cbcd1:	00 
 84cbcd2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cbcd5:	89 04 24             	mov    %eax,(%esp)
 84cbcd8:	e8 7b fc bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84cbcdd:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cbce0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cbce4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cbce7:	89 04 24             	mov    %eax,(%esp)
 84cbcea:	e8 cb c8 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84cbcef:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cbcf4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cbcf7:	89 04 24             	mov    %eax,(%esp)
 84cbcfa:	e8 81 21 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cbcff:	eb 1b                	jmp    84cbd1c <_ZN30Inter_MonitorNoticeGuildCreate12dispatch_sigEP5CUserPci+0x188>
 84cbd01:	89 d3                	mov    %edx,%ebx
 84cbd03:	89 c6                	mov    %eax,%esi
 84cbd05:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cbd08:	89 04 24             	mov    %eax,(%esp)
 84cbd0b:	e8 70 21 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cbd10:	89 f0                	mov    %esi,%eax
 84cbd12:	89 da                	mov    %ebx,%edx
 84cbd14:	89 04 24             	mov    %eax,(%esp)
 84cbd17:	e8 34 7a 61 00       	call   8ae3750 <_Unwind_Resume>
 84cbd1c:	89 d8                	mov    %ebx,%eax
 84cbd1e:	83 c4 40             	add    $0x40,%esp
 84cbd21:	5b                   	pop    %ebx
 84cbd22:	5e                   	pop    %esi
 84cbd23:	5d                   	pop    %ebp
 84cbd24:	c3                   	ret
 84cbd25:	90                   	nop

```

```c
// Inter_MonitorNoticeGuildCreate::dispatch_sig @ 0x84cbb94

/* Inter_MonitorNoticeGuildCreate::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorNoticeGuildCreate::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  PacketGuard local_20 [12];
  int local_14;
  size_t local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 == 0) {
    uVar3 = 0x267c;
  }
  else {
    local_14 = param_3;
    iVar1 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar1 == *(int *)(local_14 + 0xe)) {
      CUserCharacInfo::set_charac_guildkey((CUserCharacInfo *)param_2,*(uint *)(local_14 + 10));
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084cbc71 to 084cbcee has its CatchHandler @ 084cbd01 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x47);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 10));
      local_10 = strlen((char *)(local_14 + 0x12));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x12),local_10)
      ;
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send((CUser *)param_2,local_20);
      uVar3 = 0;
      PacketGuard::~PacketGuard(local_20);
    }
    else {
      uVar3 = *(undefined4 *)(local_14 + 0xe);
      uVar2 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorNoticeGuildCreate::dispatch_sig(CUser*, char*, int)",
                 0x2682,
                 "Packet_Monitor_Notice_Guild_Create_ToUser::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar2,uVar3);
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

