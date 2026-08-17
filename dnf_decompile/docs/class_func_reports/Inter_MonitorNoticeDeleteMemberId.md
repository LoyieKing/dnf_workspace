# Inter_MonitorNoticeDeleteMemberId

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084cdc2c Inter_MonitorNoticeDeleteMemberId::dispatch_sig  [0x084cdc2c-0x84cddab] ===
 84cdc2c:	55                   	push   %ebp
 84cdc2d:	89 e5                	mov    %esp,%ebp
 84cdc2f:	56                   	push   %esi
 84cdc30:	53                   	push   %ebx
 84cdc31:	83 ec 40             	sub    $0x40,%esp
 84cdc34:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cdc37:	89 04 24             	mov    %eax,(%esp)
 84cdc3a:	e8 4d c7 c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84cdc3f:	85 c0                	test   %eax,%eax
 84cdc41:	0f 94 c0             	sete   %al
 84cdc44:	84 c0                	test   %al,%al
 84cdc46:	74 0a                	je     84cdc52 <_ZN33Inter_MonitorNoticeDeleteMemberId12dispatch_sigEP5CUserPci+0x26>
 84cdc48:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cdc4d:	e9 51 01 00 00       	jmp    84cdda3 <_ZN33Inter_MonitorNoticeDeleteMemberId12dispatch_sigEP5CUserPci+0x177>
 84cdc52:	8b 45 10             	mov    0x10(%ebp),%eax
 84cdc55:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84cdc58:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cdc5f:	ff 
 84cdc60:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cdc63:	89 04 24             	mov    %eax,(%esp)
 84cdc66:	e8 35 03 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84cdc6b:	89 c2                	mov    %eax,%edx
 84cdc6d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cdc70:	8b 40 0e             	mov    0xe(%eax),%eax
 84cdc73:	39 c2                	cmp    %eax,%edx
 84cdc75:	0f 95 c0             	setne  %al
 84cdc78:	84 c0                	test   %al,%al
 84cdc7a:	74 57                	je     84cdcd3 <_ZN33Inter_MonitorNoticeDeleteMemberId12dispatch_sigEP5CUserPci+0xa7>
 84cdc7c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cdc7f:	8b 58 0e             	mov    0xe(%eax),%ebx
 84cdc82:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cdc89:	ff 
 84cdc8a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cdc8d:	89 04 24             	mov    %eax,(%esp)
 84cdc90:	e8 0b 03 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84cdc95:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84cdc99:	89 44 24 14          	mov    %eax,0x14(%esp)
 84cdc9d:	c7 44 24 10 70 87 c8 	movl   $0x8c88770,0x10(%esp)
 84cdca4:	08 
 84cdca5:	c7 44 24 0c 6d 29 00 	movl   $0x296d,0xc(%esp)
 84cdcac:	00 
 84cdcad:	c7 44 24 08 60 d1 c8 	movl   $0x8c8d160,0x8(%esp)
 84cdcb4:	08 
 84cdcb5:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84cdcbc:	08 
 84cdcbd:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84cdcc4:	e8 41 5f 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84cdcc9:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cdcce:	e9 d0 00 00 00       	jmp    84cdda3 <_ZN33Inter_MonitorNoticeDeleteMemberId12dispatch_sigEP5CUserPci+0x177>
 84cdcd3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cdcd6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cdcdd:	00 
 84cdcde:	89 04 24             	mov    %eax,(%esp)
 84cdce1:	e8 14 e4 01 00       	call   84ec0fa <_ZN15CUserCharacInfo24set_connect_upper_memberEj>
 84cdce6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cdce9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cdcf0:	00 
 84cdcf1:	89 04 24             	mov    %eax,(%esp)
 84cdcf4:	e8 87 7e 17 00       	call   8645b80 <_ZN15CUserCharacInfo25set_uppermember_exp_levelEh>
 84cdcf9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cdcfc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cdd03:	00 
 84cdd04:	89 04 24             	mov    %eax,(%esp)
 84cdd07:	e8 d0 e3 01 00       	call   84ec0dc <_ZN15CUserCharacInfo20set_charac_memberkeyEj>
 84cdd0c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cdd0f:	89 04 24             	mov    %eax,(%esp)
 84cdd12:	e8 35 74 18 00       	call   865514c <_ZN5CUser8GetPartyEv>
 84cdd17:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84cdd1a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84cdd1e:	74 0b                	je     84cdd2b <_ZN33Inter_MonitorNoticeDeleteMemberId12dispatch_sigEP5CUserPci+0xff>
 84cdd20:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cdd23:	89 04 24             	mov    %eax,(%esp)
 84cdd26:	e8 f9 ef 0c 00       	call   859cd24 <_ZN6CParty24send_party_realtime_infoEv>
 84cdd2b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cdd2e:	89 04 24             	mov    %eax,(%esp)
 84cdd31:	e8 16 00 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84cdd36:	c7 44 24 08 4b 00 00 	movl   $0x4b,0x8(%esp)
 84cdd3d:	00 
 84cdd3e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cdd45:	00 
 84cdd46:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cdd49:	89 04 24             	mov    %eax,(%esp)
 84cdd4c:	e8 ab db bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84cdd51:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cdd58:	00 
 84cdd59:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cdd5c:	89 04 24             	mov    %eax,(%esp)
 84cdd5f:	e8 f4 db bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84cdd64:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cdd67:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cdd6b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cdd6e:	89 04 24             	mov    %eax,(%esp)
 84cdd71:	e8 44 a8 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84cdd76:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cdd7b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cdd7e:	89 04 24             	mov    %eax,(%esp)
 84cdd81:	e8 fa 00 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cdd86:	eb 1b                	jmp    84cdda3 <_ZN33Inter_MonitorNoticeDeleteMemberId12dispatch_sigEP5CUserPci+0x177>
 84cdd88:	89 d3                	mov    %edx,%ebx
 84cdd8a:	89 c6                	mov    %eax,%esi
 84cdd8c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cdd8f:	89 04 24             	mov    %eax,(%esp)
 84cdd92:	e8 e9 00 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cdd97:	89 f0                	mov    %esi,%eax
 84cdd99:	89 da                	mov    %ebx,%edx
 84cdd9b:	89 04 24             	mov    %eax,(%esp)
 84cdd9e:	e8 ad 59 61 00       	call   8ae3750 <_Unwind_Resume>
 84cdda3:	89 d8                	mov    %ebx,%eax
 84cdda5:	83 c4 40             	add    $0x40,%esp
 84cdda8:	5b                   	pop    %ebx
 84cdda9:	5e                   	pop    %esi
 84cddaa:	5d                   	pop    %ebp
 84cddab:	c3                   	ret

```

```c
// Inter_MonitorNoticeDeleteMemberId::dispatch_sig @ 0x84cdc2c

/* Inter_MonitorNoticeDeleteMemberId::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorNoticeDeleteMemberId::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_20 [12];
  int local_14;
  CParty *local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    local_14 = param_3;
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar2 == *(int *)(local_14 + 0xe)) {
      CUserCharacInfo::set_connect_upper_member((CUserCharacInfo *)param_2,0);
      CUserCharacInfo::set_uppermember_exp_level((CUserCharacInfo *)param_2,'\0');
      CUserCharacInfo::set_charac_memberkey((CUserCharacInfo *)param_2,0);
      local_10 = (CParty *)CUser::GetParty((CUser *)param_2);
      if (local_10 != (CParty *)0x0) {
        CParty::send_party_realtime_info(local_10);
      }
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084cdd4c to 084cdd75 has its CatchHandler @ 084cdd88 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x4b);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send((CUser *)param_2,local_20);
      PacketGuard::~PacketGuard(local_20);
    }
    else {
      uVar1 = *(undefined4 *)(local_14 + 0xe);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorNoticeDeleteMemberId::dispatch_sig(CUser*, char*, int)",
                 0x296d,
                 "MEMBER : Inter_MonitorNoticeDeleteMemberId::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}

```

