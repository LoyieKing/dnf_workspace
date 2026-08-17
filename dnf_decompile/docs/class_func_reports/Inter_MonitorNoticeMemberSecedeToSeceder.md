# Inter_MonitorNoticeMemberSecedeToSeceder

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084cda74 Inter_MonitorNoticeMemberSecedeToSeceder::dispatch_sig  [0x084cda74-0x84cdc2b] ===
 84cda74:	55                   	push   %ebp
 84cda75:	89 e5                	mov    %esp,%ebp
 84cda77:	56                   	push   %esi
 84cda78:	53                   	push   %ebx
 84cda79:	83 ec 40             	sub    $0x40,%esp
 84cda7c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cda7f:	89 04 24             	mov    %eax,(%esp)
 84cda82:	e8 05 c9 c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84cda87:	85 c0                	test   %eax,%eax
 84cda89:	0f 94 c0             	sete   %al
 84cda8c:	84 c0                	test   %al,%al
 84cda8e:	74 0a                	je     84cda9a <_ZN40Inter_MonitorNoticeMemberSecedeToSeceder12dispatch_sigEP5CUserPci+0x26>
 84cda90:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cda95:	e9 88 01 00 00       	jmp    84cdc22 <_ZN40Inter_MonitorNoticeMemberSecedeToSeceder12dispatch_sigEP5CUserPci+0x1ae>
 84cda9a:	8b 45 10             	mov    0x10(%ebp),%eax
 84cda9d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84cdaa0:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cdaa7:	ff 
 84cdaa8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cdaab:	89 04 24             	mov    %eax,(%esp)
 84cdaae:	e8 ed 04 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84cdab3:	89 c2                	mov    %eax,%edx
 84cdab5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cdab8:	8b 40 0e             	mov    0xe(%eax),%eax
 84cdabb:	39 c2                	cmp    %eax,%edx
 84cdabd:	0f 95 c0             	setne  %al
 84cdac0:	84 c0                	test   %al,%al
 84cdac2:	74 57                	je     84cdb1b <_ZN40Inter_MonitorNoticeMemberSecedeToSeceder12dispatch_sigEP5CUserPci+0xa7>
 84cdac4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cdac7:	8b 58 0e             	mov    0xe(%eax),%ebx
 84cdaca:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cdad1:	ff 
 84cdad2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cdad5:	89 04 24             	mov    %eax,(%esp)
 84cdad8:	e8 c3 04 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84cdadd:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84cdae1:	89 44 24 14          	mov    %eax,0x14(%esp)
 84cdae5:	c7 44 24 10 fc 86 c8 	movl   $0x8c886fc,0x10(%esp)
 84cdaec:	08 
 84cdaed:	c7 44 24 0c 47 29 00 	movl   $0x2947,0xc(%esp)
 84cdaf4:	00 
 84cdaf5:	c7 44 24 08 c0 d1 c8 	movl   $0x8c8d1c0,0x8(%esp)
 84cdafc:	08 
 84cdafd:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84cdb04:	08 
 84cdb05:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84cdb0c:	e8 f9 60 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84cdb11:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cdb16:	e9 07 01 00 00       	jmp    84cdc22 <_ZN40Inter_MonitorNoticeMemberSecedeToSeceder12dispatch_sigEP5CUserPci+0x1ae>
 84cdb1b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cdb1e:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84cdb22:	3c 01                	cmp    $0x1,%al
 84cdb24:	75 45                	jne    84cdb6b <_ZN40Inter_MonitorNoticeMemberSecedeToSeceder12dispatch_sigEP5CUserPci+0xf7>
 84cdb26:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cdb29:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cdb30:	00 
 84cdb31:	89 04 24             	mov    %eax,(%esp)
 84cdb34:	e8 c1 e5 01 00       	call   84ec0fa <_ZN15CUserCharacInfo24set_connect_upper_memberEj>
 84cdb39:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cdb3c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cdb43:	00 
 84cdb44:	89 04 24             	mov    %eax,(%esp)
 84cdb47:	e8 34 80 17 00       	call   8645b80 <_ZN15CUserCharacInfo25set_uppermember_exp_levelEh>
 84cdb4c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cdb4f:	89 04 24             	mov    %eax,(%esp)
 84cdb52:	e8 f5 75 18 00       	call   865514c <_ZN5CUser8GetPartyEv>
 84cdb57:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84cdb5a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84cdb5e:	74 0b                	je     84cdb6b <_ZN40Inter_MonitorNoticeMemberSecedeToSeceder12dispatch_sigEP5CUserPci+0xf7>
 84cdb60:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cdb63:	89 04 24             	mov    %eax,(%esp)
 84cdb66:	e8 b9 f1 0c 00       	call   859cd24 <_ZN6CParty24send_party_realtime_infoEv>
 84cdb6b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cdb6e:	89 04 24             	mov    %eax,(%esp)
 84cdb71:	e8 d6 01 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84cdb76:	c7 44 24 08 4d 00 00 	movl   $0x4d,0x8(%esp)
 84cdb7d:	00 
 84cdb7e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cdb85:	00 
 84cdb86:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cdb89:	89 04 24             	mov    %eax,(%esp)
 84cdb8c:	e8 6b dd bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84cdb91:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cdb94:	83 c0 13             	add    $0x13,%eax
 84cdb97:	89 04 24             	mov    %eax,(%esp)
 84cdb9a:	e8 11 08 bb ff       	call   807e3b0 <strlen@plt>
 84cdb9f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84cdba2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cdba5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cdba9:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cdbac:	89 04 24             	mov    %eax,(%esp)
 84cdbaf:	e8 88 dd bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84cdbb4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84cdbb7:	8d 50 13             	lea    0x13(%eax),%edx
 84cdbba:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cdbbd:	89 44 24 08          	mov    %eax,0x8(%esp)
 84cdbc1:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cdbc5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cdbc8:	89 04 24             	mov    %eax,(%esp)
 84cdbcb:	e8 14 98 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84cdbd0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cdbd7:	00 
 84cdbd8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cdbdb:	89 04 24             	mov    %eax,(%esp)
 84cdbde:	e8 75 dd bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84cdbe3:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cdbe6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cdbea:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cdbed:	89 04 24             	mov    %eax,(%esp)
 84cdbf0:	e8 c5 a9 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84cdbf5:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cdbfa:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cdbfd:	89 04 24             	mov    %eax,(%esp)
 84cdc00:	e8 7b 02 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cdc05:	eb 1b                	jmp    84cdc22 <_ZN40Inter_MonitorNoticeMemberSecedeToSeceder12dispatch_sigEP5CUserPci+0x1ae>
 84cdc07:	89 d3                	mov    %edx,%ebx
 84cdc09:	89 c6                	mov    %eax,%esi
 84cdc0b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84cdc0e:	89 04 24             	mov    %eax,(%esp)
 84cdc11:	e8 6a 02 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cdc16:	89 f0                	mov    %esi,%eax
 84cdc18:	89 da                	mov    %ebx,%edx
 84cdc1a:	89 04 24             	mov    %eax,(%esp)
 84cdc1d:	e8 2e 5b 61 00       	call   8ae3750 <_Unwind_Resume>
 84cdc22:	89 d8                	mov    %ebx,%eax
 84cdc24:	83 c4 40             	add    $0x40,%esp
 84cdc27:	5b                   	pop    %ebx
 84cdc28:	5e                   	pop    %esi
 84cdc29:	5d                   	pop    %ebp
 84cdc2a:	c3                   	ret
 84cdc2b:	90                   	nop

```

```c
// Inter_MonitorNoticeMemberSecedeToSeceder::dispatch_sig @ 0x84cda74

/* Inter_MonitorNoticeMemberSecedeToSeceder::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_MonitorNoticeMemberSecedeToSeceder::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
                    /* try { // try from 084cdb8c to 084cdbf4 has its CatchHandler @ 084cdc07 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x4d);
      local_14 = strlen((char *)(local_18 + 0x13));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_14);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_24,(char *)(local_18 + 0x13),local_14)
      ;
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
      CUser::Send((CUser *)param_2,local_24);
      PacketGuard::~PacketGuard(local_24);
    }
    else {
      uVar1 = *(undefined4 *)(local_18 + 0xe);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorNoticeMemberSecedeToSeceder::dispatch_sig(CUser*, char*, int)"
                 ,0x2947,
                 "MEMBER : Inter_MonitorNoticeMemberSecede::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uSecededCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}

```

