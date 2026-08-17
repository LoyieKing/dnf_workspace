# Inter_MonitorSetGuildKey

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084cbd26 Inter_MonitorSetGuildKey::dispatch_sig  [0x084cbd26-0x84cc005] ===
 84cbd26:	55                   	push   %ebp
 84cbd27:	89 e5                	mov    %esp,%ebp
 84cbd29:	56                   	push   %esi
 84cbd2a:	53                   	push   %ebx
 84cbd2b:	83 ec 40             	sub    $0x40,%esp
 84cbd2e:	8b 45 10             	mov    0x10(%ebp),%eax
 84cbd31:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84cbd34:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cbd37:	89 04 24             	mov    %eax,(%esp)
 84cbd3a:	e8 4d e6 c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84cbd3f:	83 f8 02             	cmp    $0x2,%eax
 84cbd42:	0f 94 c0             	sete   %al
 84cbd45:	84 c0                	test   %al,%al
 84cbd47:	74 24                	je     84cbd6d <_ZN24Inter_MonitorSetGuildKey12dispatch_sigEP5CUserPci+0x47>
 84cbd49:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cbd4c:	8b 50 0e             	mov    0xe(%eax),%edx
 84cbd4f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cbd52:	8b 40 12             	mov    0x12(%eax),%eax
 84cbd55:	89 54 24 08          	mov    %edx,0x8(%esp)
 84cbd59:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cbd5d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cbd60:	89 04 24             	mov    %eax,(%esp)
 84cbd63:	e8 e6 02 1a 00       	call   866c04e <_ZN5CUser28set_charac_guildkey_in_loginEjj>
 84cbd68:	e9 8c 02 00 00       	jmp    84cbff9 <_ZN24Inter_MonitorSetGuildKey12dispatch_sigEP5CUserPci+0x2d3>
 84cbd6d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cbd70:	89 04 24             	mov    %eax,(%esp)
 84cbd73:	e8 14 e6 c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84cbd78:	83 f8 02             	cmp    $0x2,%eax
 84cbd7b:	0f 9f c0             	setg   %al
 84cbd7e:	84 c0                	test   %al,%al
 84cbd80:	0f 84 6c 02 00 00    	je     84cbff2 <_ZN24Inter_MonitorSetGuildKey12dispatch_sigEP5CUserPci+0x2cc>
 84cbd86:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cbd8d:	ff 
 84cbd8e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cbd91:	89 04 24             	mov    %eax,(%esp)
 84cbd94:	e8 07 22 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84cbd99:	89 c2                	mov    %eax,%edx
 84cbd9b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cbd9e:	8b 40 0e             	mov    0xe(%eax),%eax
 84cbda1:	39 c2                	cmp    %eax,%edx
 84cbda3:	0f 95 c0             	setne  %al
 84cbda6:	84 c0                	test   %al,%al
 84cbda8:	74 57                	je     84cbe01 <_ZN24Inter_MonitorSetGuildKey12dispatch_sigEP5CUserPci+0xdb>
 84cbdaa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cbdad:	8b 58 0e             	mov    0xe(%eax),%ebx
 84cbdb0:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cbdb7:	ff 
 84cbdb8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cbdbb:	89 04 24             	mov    %eax,(%esp)
 84cbdbe:	e8 dd 21 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84cbdc3:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84cbdc7:	89 44 24 14          	mov    %eax,0x14(%esp)
 84cbdcb:	c7 44 24 10 3c 82 c8 	movl   $0x8c8823c,0x10(%esp)
 84cbdd2:	08 
 84cbdd3:	c7 44 24 0c a7 26 00 	movl   $0x26a7,0xc(%esp)
 84cbdda:	00 
 84cbddb:	c7 44 24 08 20 d5 c8 	movl   $0x8c8d520,0x8(%esp)
 84cbde2:	08 
 84cbde3:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84cbdea:	08 
 84cbdeb:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84cbdf2:	e8 13 7e 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84cbdf7:	b8 00 00 00 00       	mov    $0x0,%eax
 84cbdfc:	e9 fd 01 00 00       	jmp    84cbffe <_ZN24Inter_MonitorSetGuildKey12dispatch_sigEP5CUserPci+0x2d8>
 84cbe01:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cbe04:	8b 40 12             	mov    0x12(%eax),%eax
 84cbe07:	85 c0                	test   %eax,%eax
 84cbe09:	0f 85 21 01 00 00    	jne    84cbf30 <_ZN24Inter_MonitorSetGuildKey12dispatch_sigEP5CUserPci+0x20a>
 84cbe0f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cbe12:	89 04 24             	mov    %eax,(%esp)
 84cbe15:	e8 7c 03 1a 00       	call   866c196 <_ZN5CUser16resetGuildDBInfoEv>
 84cbe1a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84cbe1d:	89 04 24             	mov    %eax,(%esp)
 84cbe20:	e8 27 1f 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84cbe25:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84cbe28:	89 04 24             	mov    %eax,(%esp)
 84cbe2b:	e8 b6 fa bf ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 84cbe30:	c7 44 24 08 97 00 00 	movl   $0x97,0x8(%esp)
 84cbe37:	00 
 84cbe38:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cbe3f:	00 
 84cbe40:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84cbe43:	89 04 24             	mov    %eax,(%esp)
 84cbe46:	e8 b1 fa bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84cbe4b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cbe52:	00 
 84cbe53:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84cbe56:	89 04 24             	mov    %eax,(%esp)
 84cbe59:	e8 fa fa bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84cbe5e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84cbe61:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cbe65:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cbe68:	89 04 24             	mov    %eax,(%esp)
 84cbe6b:	e8 4a c7 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84cbe70:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cbe73:	89 04 24             	mov    %eax,(%esp)
 84cbe76:	e8 ef 05 1a 00       	call   866c46a <_ZN5CUser15send_skill_infoEv>
 84cbe7b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84cbe7e:	89 04 24             	mov    %eax,(%esp)
 84cbe81:	e8 60 fa bf ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 84cbe86:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 84cbe8d:	00 
 84cbe8e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cbe95:	00 
 84cbe96:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84cbe99:	89 04 24             	mov    %eax,(%esp)
 84cbe9c:	e8 5b fa bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84cbea1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cbea8:	00 
 84cbea9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84cbeac:	89 04 24             	mov    %eax,(%esp)
 84cbeaf:	e8 6c fa bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cbeb4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cbebb:	00 
 84cbebc:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84cbebf:	89 04 24             	mov    %eax,(%esp)
 84cbec2:	e8 dd df c0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84cbec7:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84cbeca:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84cbed1:	00 
 84cbed2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cbed6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cbed9:	89 04 24             	mov    %eax,(%esp)
 84cbedc:	e8 6d e5 18 00       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 84cbee1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cbee8:	00 
 84cbee9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84cbeec:	89 04 24             	mov    %eax,(%esp)
 84cbeef:	e8 64 fa bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84cbef4:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84cbef7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cbefb:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cbefe:	89 04 24             	mov    %eax,(%esp)
 84cbf01:	e8 b4 c6 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84cbf06:	eb 1b                	jmp    84cbf23 <_ZN24Inter_MonitorSetGuildKey12dispatch_sigEP5CUserPci+0x1fd>
 84cbf08:	89 d3                	mov    %edx,%ebx
 84cbf0a:	89 c6                	mov    %eax,%esi
 84cbf0c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84cbf0f:	89 04 24             	mov    %eax,(%esp)
 84cbf12:	e8 69 1f 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cbf17:	89 f0                	mov    %esi,%eax
 84cbf19:	89 da                	mov    %ebx,%edx
 84cbf1b:	89 04 24             	mov    %eax,(%esp)
 84cbf1e:	e8 2d 78 61 00       	call   8ae3750 <_Unwind_Resume>
 84cbf23:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84cbf26:	89 04 24             	mov    %eax,(%esp)
 84cbf29:	e8 52 1f 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cbf2e:	eb 15                	jmp    84cbf45 <_ZN24Inter_MonitorSetGuildKey12dispatch_sigEP5CUserPci+0x21f>
 84cbf30:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cbf33:	8b 50 12             	mov    0x12(%eax),%edx
 84cbf36:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cbf39:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cbf3d:	89 04 24             	mov    %eax,(%esp)
 84cbf40:	e8 d9 a7 dd ff       	call   82a671e <_ZN15CUserCharacInfo19set_charac_guildkeyEj>
 84cbf45:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cbf48:	89 04 24             	mov    %eax,(%esp)
 84cbf4b:	e8 fc 1d 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84cbf50:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cbf53:	89 04 24             	mov    %eax,(%esp)
 84cbf56:	e8 8b f9 bf ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 84cbf5b:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 84cbf62:	00 
 84cbf63:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cbf6a:	00 
 84cbf6b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cbf6e:	89 04 24             	mov    %eax,(%esp)
 84cbf71:	e8 86 f9 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84cbf76:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84cbf7d:	00 
 84cbf7e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cbf81:	89 04 24             	mov    %eax,(%esp)
 84cbf84:	e8 97 f9 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cbf89:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cbf8c:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 84cbf93:	00 
 84cbf94:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cbf98:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cbf9b:	89 04 24             	mov    %eax,(%esp)
 84cbf9e:	e8 ab e4 18 00       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 84cbfa3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cbfaa:	00 
 84cbfab:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cbfae:	89 04 24             	mov    %eax,(%esp)
 84cbfb1:	e8 a2 f9 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84cbfb6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cbfb9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cbfbd:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cbfc0:	89 04 24             	mov    %eax,(%esp)
 84cbfc3:	e8 f2 c5 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84cbfc8:	eb 1b                	jmp    84cbfe5 <_ZN24Inter_MonitorSetGuildKey12dispatch_sigEP5CUserPci+0x2bf>
 84cbfca:	89 d3                	mov    %edx,%ebx
 84cbfcc:	89 c6                	mov    %eax,%esi
 84cbfce:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cbfd1:	89 04 24             	mov    %eax,(%esp)
 84cbfd4:	e8 a7 1e 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cbfd9:	89 f0                	mov    %esi,%eax
 84cbfdb:	89 da                	mov    %ebx,%edx
 84cbfdd:	89 04 24             	mov    %eax,(%esp)
 84cbfe0:	e8 6b 77 61 00       	call   8ae3750 <_Unwind_Resume>
 84cbfe5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cbfe8:	89 04 24             	mov    %eax,(%esp)
 84cbfeb:	e8 90 1e 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cbff0:	eb 07                	jmp    84cbff9 <_ZN24Inter_MonitorSetGuildKey12dispatch_sigEP5CUserPci+0x2d3>
 84cbff2:	b8 d4 26 00 00       	mov    $0x26d4,%eax
 84cbff7:	eb 05                	jmp    84cbffe <_ZN24Inter_MonitorSetGuildKey12dispatch_sigEP5CUserPci+0x2d8>
 84cbff9:	b8 00 00 00 00       	mov    $0x0,%eax
 84cbffe:	83 c4 40             	add    $0x40,%esp
 84cc001:	5b                   	pop    %ebx
 84cc002:	5e                   	pop    %esi
 84cc003:	5d                   	pop    %ebp
 84cc004:	c3                   	ret
 84cc005:	90                   	nop

```

```c
// Inter_MonitorSetGuildKey::dispatch_sig @ 0x84cbd26

/* Inter_MonitorSetGuildKey::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorSetGuildKey::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_28 [12];
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 == 2) {
    CUser::set_charac_guildkey_in_login
              ((CUser *)param_2,*(uint *)(local_10 + 0x12),*(uint *)(local_10 + 0xe));
  }
  else {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 < 3) {
      return 0x26d4;
    }
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar2 != *(int *)(local_10 + 0xe)) {
      uVar1 = *(undefined4 *)(local_10 + 0xe);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorSetGuildKey::dispatch_sig(CUser*, char*, int)",0x26a7,
                 "Inter_MonitorSetGuildKey::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
      return 0;
    }
    if (*(int *)(local_10 + 0x12) == 0) {
      CUser::resetGuildDBInfo((CUser *)param_2);
      PacketGuard::PacketGuard(local_28);
                    /* try { // try from 084cbe2b to 084cbf05 has its CatchHandler @ 084cbf08 */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_28);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0x97);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
      CUser::Send((CUser *)param_2,local_28);
      CUser::send_skill_info((CUser *)param_2);
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_28);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,1);
      CUser::make_basic_info((CUser *)param_2,(char *)local_28,'\x01');
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
      CUser::Send((CUser *)param_2,local_28);
      PacketGuard::~PacketGuard(local_28);
    }
    else {
      CUserCharacInfo::set_charac_guildkey((CUserCharacInfo *)param_2,*(uint *)(local_10 + 0x12));
    }
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084cbf56 to 084cbfc7 has its CatchHandler @ 084cbfca */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,2);
    CUser::make_basic_info((CUser *)param_2,(char *)local_1c,'\x02');
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send((CUser *)param_2,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return 0;
}

```

