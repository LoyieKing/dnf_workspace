# DisPatcher_Exit

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081ed948 DisPatcher_Exit::dispatch_sig  [0x081ed948-0x81eddeb] ===
 81ed948:	55                   	push   %ebp
 81ed949:	89 e5                	mov    %esp,%ebp
 81ed94b:	56                   	push   %esi
 81ed94c:	53                   	push   %ebx
 81ed94d:	83 ec 60             	sub    $0x60,%esp
 81ed950:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 81ed957:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 81ed95e:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 81ed965:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 81ed96c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ed96f:	8d 90 e0 00 00 00    	lea    0xe0(%eax),%edx
 81ed975:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 81ed97c:	00 
 81ed97d:	8d 45 bc             	lea    -0x44(%ebp),%eax
 81ed980:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ed984:	89 14 24             	mov    %edx,(%esp)
 81ed987:	e8 a2 4e f7 ff       	call   816282e <_ZN8CNetworkILi4096ELi450000EE10GetPeerIP2EPci>
 81ed98c:	c6 45 bb 00          	movb   $0x0,-0x45(%ebp)
 81ed990:	8d 45 bb             	lea    -0x45(%ebp),%eax
 81ed993:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ed997:	8b 45 10             	mov    0x10(%ebp),%eax
 81ed99a:	89 04 24             	mov    %eax,(%esp)
 81ed99d:	e8 ce f5 39 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81ed9a2:	83 f0 01             	xor    $0x1,%eax
 81ed9a5:	84 c0                	test   %al,%al
 81ed9a7:	74 04                	je     81ed9ad <_ZN15DisPatcher_Exit12dispatch_sigEP5CUserR9PacketBuf+0x65>
 81ed9a9:	c6 45 bb 00          	movb   $0x0,-0x45(%ebp)
 81ed9ad:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81ed9b1:	74 16                	je     81ed9c9 <_ZN15DisPatcher_Exit12dispatch_sigEP5CUserR9PacketBuf+0x81>
 81ed9b3:	0f b6 45 bb          	movzbl -0x45(%ebp),%eax
 81ed9b7:	0f b6 c0             	movzbl %al,%eax
 81ed9ba:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ed9be:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ed9c1:	89 04 24             	mov    %eax,(%esp)
 81ed9c4:	e8 59 24 04 00       	call   822fe22 <_ZN5CUser16SetLogInOutStateEh>
 81ed9c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ed9cc:	05 f0 e3 08 00       	add    $0x8e3f0,%eax
 81ed9d1:	89 04 24             	mov    %eax,(%esp)
 81ed9d4:	e8 05 15 04 00       	call   822eede <_ZN8WongWork12CMCAPManager19IsSaveCleanPadPointEv>
 81ed9d9:	84 c0                	test   %al,%al
 81ed9db:	74 39                	je     81eda16 <_ZN15DisPatcher_Exit12dispatch_sigEP5CUserR9PacketBuf+0xce>
 81ed9dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ed9e0:	89 04 24             	mov    %eax,(%esp)
 81ed9e3:	e8 86 c9 ee ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81ed9e8:	89 c3                	mov    %eax,%ebx
 81ed9ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ed9ed:	05 f0 e3 08 00       	add    $0x8e3f0,%eax
 81ed9f2:	89 04 24             	mov    %eax,(%esp)
 81ed9f5:	e8 aa 14 04 00       	call   822eea4 <_ZN8WongWork12CMCAPManager8getPointEv>
 81ed9fa:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81ed9fe:	89 04 24             	mov    %eax,(%esp)
 81eda01:	e8 dc 55 24 00       	call   8432fe2 <_ZN20DB_SaveCleanpadPoint11makeRequestEji>
 81eda06:	8b 45 0c             	mov    0xc(%ebp),%eax
 81eda09:	05 f0 e3 08 00       	add    $0x8e3f0,%eax
 81eda0e:	89 04 24             	mov    %eax,(%esp)
 81eda11:	e8 d4 14 04 00       	call   822eeea <_ZN8WongWork12CMCAPManager20disableCleanPadPointEv>
 81eda16:	8b 45 0c             	mov    0xc(%ebp),%eax
 81eda19:	89 04 24             	mov    %eax,(%esp)
 81eda1c:	e8 6b c9 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81eda21:	83 f8 02             	cmp    $0x2,%eax
 81eda24:	0f 9f c0             	setg   %al
 81eda27:	84 c0                	test   %al,%al
 81eda29:	74 79                	je     81edaa4 <_ZN15DisPatcher_Exit12dispatch_sigEP5CUserR9PacketBuf+0x15c>
 81eda2b:	e8 77 c9 ee ff       	call   80da3a7 <_Z11G_GameWorldv>
 81eda30:	89 04 24             	mov    %eax,(%esp)
 81eda33:	e8 06 6a 04 00       	call   823443e <_ZNK9GameWorld24IsEquipSlotSwitchChannelEv>
 81eda38:	84 c0                	test   %al,%al
 81eda3a:	74 68                	je     81edaa4 <_ZN15DisPatcher_Exit12dispatch_sigEP5CUserR9PacketBuf+0x15c>
 81eda3c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81eda3f:	89 04 24             	mov    %eax,(%esp)
 81eda42:	e8 35 20 04 00       	call   822fa7c <_ZN15CUserCharacInfo28getCurChannelEquipslotSwitchEv>
 81eda47:	3c 01                	cmp    $0x1,%al
 81eda49:	0f 94 c0             	sete   %al
 81eda4c:	84 c0                	test   %al,%al
 81eda4e:	74 54                	je     81edaa4 <_ZN15DisPatcher_Exit12dispatch_sigEP5CUserR9PacketBuf+0x15c>
 81eda50:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 81eda57:	00 
 81eda58:	8b 45 0c             	mov    0xc(%ebp),%eax
 81eda5b:	89 04 24             	mov    %eax,(%esp)
 81eda5e:	e8 21 fb ee ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 81eda63:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81eda66:	8b 45 0c             	mov    0xc(%ebp),%eax
 81eda69:	89 04 24             	mov    %eax,(%esp)
 81eda6c:	e8 2f 20 04 00       	call   822faa0 <_ZN15CUserCharacInfo27getCurExpandEquipslotSwitchEv>
 81eda71:	0f be d8             	movsbl %al,%ebx
 81eda74:	8b 45 0c             	mov    0xc(%ebp),%eax
 81eda77:	89 04 24             	mov    %eax,(%esp)
 81eda7a:	e8 fd 1f 04 00       	call   822fa7c <_ZN15CUserCharacInfo28getCurChannelEquipslotSwitchEv>
 81eda7f:	0f be c0             	movsbl %al,%eax
 81eda82:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 81eda86:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81eda8a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eda91:	00 
 81eda92:	8b 45 0c             	mov    0xc(%ebp),%eax
 81eda95:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eda99:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81eda9c:	89 04 24             	mov    %eax,(%esp)
 81eda9f:	e8 9a b9 2a 00       	call   849943e <_ZN16CExpandEquipslot15EquipslotSwitchEP5CUserccc>
 81edaa4:	8d 45 d3             	lea    -0x2d(%ebp),%eax
 81edaa7:	89 04 24             	mov    %eax,(%esp)
 81edaaa:	e8 21 26 4f 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 81edaaf:	8d 45 d3             	lea    -0x2d(%ebp),%eax
 81edab2:	89 44 24 08          	mov    %eax,0x8(%esp)
 81edab6:	c7 44 24 04 0c 21 bc 	movl   $0x8bc210c,0x4(%esp)
 81edabd:	08 
 81edabe:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81edac1:	89 04 24             	mov    %eax,(%esp)
 81edac4:	e8 67 9b 51 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 81edac9:	e8 2c a4 fa ff       	call   8197efa <_ZN4ARAD9SingletonINS_16Arad_DataManagerEE3GetEv>
 81edace:	8d 55 cc             	lea    -0x34(%ebp),%edx
 81edad1:	89 54 24 04          	mov    %edx,0x4(%esp)
 81edad5:	89 04 24             	mov    %eax,(%esp)
 81edad8:	e8 cf a7 f9 ff       	call   81882ac <_ZN4ARAD16Arad_DataManager14findGameScriptESs>
 81edadd:	8b 55 0c             	mov    0xc(%ebp),%edx
 81edae0:	89 54 24 04          	mov    %edx,0x4(%esp)
 81edae4:	89 04 24             	mov    %eax,(%esp)
 81edae7:	e8 1a 80 fa ff       	call   8195b06 <_ZN4ARAD27Arad_EventPeriodDataManager17delUserRewardDataEP5CUser>
 81edaec:	eb 15                	jmp    81edb03 <_ZN15DisPatcher_Exit12dispatch_sigEP5CUserR9PacketBuf+0x1bb>
 81edaee:	89 d3                	mov    %edx,%ebx
 81edaf0:	89 c6                	mov    %eax,%esi
 81edaf2:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81edaf5:	89 04 24             	mov    %eax,(%esp)
 81edaf8:	e8 e3 a0 51 00       	call   8707be0 <_ZNSsD1Ev>
 81edafd:	89 f0                	mov    %esi,%eax
 81edaff:	89 da                	mov    %ebx,%edx
 81edb01:	eb 0d                	jmp    81edb10 <_ZN15DisPatcher_Exit12dispatch_sigEP5CUserR9PacketBuf+0x1c8>
 81edb03:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81edb06:	89 04 24             	mov    %eax,(%esp)
 81edb09:	e8 d2 a0 51 00       	call   8707be0 <_ZNSsD1Ev>
 81edb0e:	eb 1b                	jmp    81edb2b <_ZN15DisPatcher_Exit12dispatch_sigEP5CUserR9PacketBuf+0x1e3>
 81edb10:	89 d3                	mov    %edx,%ebx
 81edb12:	89 c6                	mov    %eax,%esi
 81edb14:	8d 45 d3             	lea    -0x2d(%ebp),%eax
 81edb17:	89 04 24             	mov    %eax,(%esp)
 81edb1a:	e8 d1 25 4f 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81edb1f:	89 f0                	mov    %esi,%eax
 81edb21:	89 da                	mov    %ebx,%edx
 81edb23:	89 04 24             	mov    %eax,(%esp)
 81edb26:	e8 25 5c 8f 00       	call   8ae3750 <_Unwind_Resume>
 81edb2b:	8d 45 d3             	lea    -0x2d(%ebp),%eax
 81edb2e:	89 04 24             	mov    %eax,(%esp)
 81edb31:	e8 ba 25 4f 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81edb36:	8b 45 0c             	mov    0xc(%ebp),%eax
 81edb39:	89 04 24             	mov    %eax,(%esp)
 81edb3c:	e8 4b c8 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81edb41:	85 c0                	test   %eax,%eax
 81edb43:	0f 95 c0             	setne  %al
 81edb46:	84 c0                	test   %al,%al
 81edb48:	0f 84 91 02 00 00    	je     81edddf <_ZN15DisPatcher_Exit12dispatch_sigEP5CUserR9PacketBuf+0x497>
 81edb4e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81edb51:	89 04 24             	mov    %eax,(%esp)
 81edb54:	e8 b3 53 46 00       	call   8652f0c <_ZN5CUser14WorkPerFiveMinEv>
 81edb59:	8b 45 0c             	mov    0xc(%ebp),%eax
 81edb5c:	89 04 24             	mov    %eax,(%esp)
 81edb5f:	e8 60 1a 04 00       	call   822f5c4 <_ZN15CUserCharacInfo20get_charac_memberkeyEv>
 81edb64:	85 c0                	test   %eax,%eax
 81edb66:	0f 95 c0             	setne  %al
 81edb69:	84 c0                	test   %al,%al
 81edb6b:	0f 84 a4 00 00 00    	je     81edc15 <_ZN15DisPatcher_Exit12dispatch_sigEP5CUserR9PacketBuf+0x2cd>
 81edb71:	8b 45 0c             	mov    0xc(%ebp),%eax
 81edb74:	89 04 24             	mov    %eax,(%esp)
 81edb77:	e8 96 1a 04 00       	call   822f612 <_ZNK15CUserCharacInfo33get_member_pay_tex_money_to_upperEv>
 81edb7c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81edb7f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81edb82:	89 04 24             	mov    %eax,(%esp)
 81edb85:	e8 c8 1a 04 00       	call   822f652 <_ZNK15CUserCharacInfo35get_member_pay_tex_fatigue_to_upperEv>
 81edb8a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81edb8d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81edb90:	89 04 24             	mov    %eax,(%esp)
 81edb93:	e8 b6 e0 ed ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81edb98:	89 c3                	mov    %eax,%ebx
 81edb9a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81edb9d:	89 04 24             	mov    %eax,(%esp)
 81edba0:	e8 41 1a 04 00       	call   822f5e6 <_ZN15CUserCharacInfo23is_connect_upper_memberEv>
 81edba5:	0f b6 f0             	movzbl %al,%esi
 81edba8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81edbab:	89 04 24             	mov    %eax,(%esp)
 81edbae:	e8 dd e0 ed ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81edbb3:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 81edbb9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81edbbd:	89 14 24             	mov    %edx,(%esp)
 81edbc0:	e8 c5 44 f2 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 81edbc5:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81edbc8:	89 54 24 10          	mov    %edx,0x10(%esp)
 81edbcc:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81edbcf:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81edbd3:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81edbd7:	89 74 24 04          	mov    %esi,0x4(%esp)
 81edbdb:	89 04 24             	mov    %eax,(%esp)
 81edbde:	e8 d1 33 28 00       	call   8470fb4 <_ZN19CMonitorServerProxy16SendMemberPayTaxEbjii>
 81edbe3:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81edbe7:	7e 13                	jle    81edbfc <_ZN15DisPatcher_Exit12dispatch_sigEP5CUserR9PacketBuf+0x2b4>
 81edbe9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81edbec:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81edbf3:	00 
 81edbf4:	89 04 24             	mov    %eax,(%esp)
 81edbf7:	e8 38 1a 04 00       	call   822f634 <_ZN15CUserCharacInfo33set_member_pay_tex_money_to_upperEi>
 81edbfc:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81edc00:	7e 13                	jle    81edc15 <_ZN15DisPatcher_Exit12dispatch_sigEP5CUserR9PacketBuf+0x2cd>
 81edc02:	8b 45 0c             	mov    0xc(%ebp),%eax
 81edc05:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81edc0c:	00 
 81edc0d:	89 04 24             	mov    %eax,(%esp)
 81edc10:	e8 5f 1a 04 00       	call   822f674 <_ZN15CUserCharacInfo35set_member_pay_tex_fatigue_to_upperEi>
 81edc15:	8b 45 0c             	mov    0xc(%ebp),%eax
 81edc18:	89 04 24             	mov    %eax,(%esp)
 81edc1b:	e8 4e c7 ee ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81edc20:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81edc27:	00 
 81edc28:	89 04 24             	mov    %eax,(%esp)
 81edc2b:	e8 1b b4 f1 ff       	call   810904b <_Z14NumberToStringji>
 81edc30:	89 c3                	mov    %eax,%ebx
 81edc32:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81edc39:	00 
 81edc3a:	c7 44 24 08 6d 70 00 	movl   $0x706d,0x8(%esp)
 81edc41:	00 
 81edc42:	c7 44 24 04 a0 04 bd 	movl   $0x8bd04a0,0x4(%esp)
 81edc49:	08 
 81edc4a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81edc4d:	89 04 24             	mov    %eax,(%esp)
 81edc50:	e8 c3 1a 36 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81edc55:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81edc59:	c7 44 24 04 28 21 bc 	movl   $0x8bc2128,0x4(%esp)
 81edc60:	08 
 81edc61:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81edc64:	89 04 24             	mov    %eax,(%esp)
 81edc67:	e8 1c 1b 36 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81edc6c:	e8 77 6f 3d 00       	call   85c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>
 81edc71:	8b 10                	mov    (%eax),%edx
 81edc73:	8b 0a                	mov    (%edx),%ecx
 81edc75:	8b 55 0c             	mov    0xc(%ebp),%edx
 81edc78:	89 54 24 04          	mov    %edx,0x4(%esp)
 81edc7c:	89 04 24             	mov    %eax,(%esp)
 81edc7f:	ff d1                	call   *%ecx
 81edc81:	e8 1a 74 04 00       	call   82350a0 <_ZN11pvp_assault21GetInstanceAssaultMgrEv>
 81edc86:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81edc8d:	00 
 81edc8e:	8b 55 0c             	mov    0xc(%ebp),%edx
 81edc91:	89 54 24 04          	mov    %edx,0x4(%esp)
 81edc95:	89 04 24             	mov    %eax,(%esp)
 81edc98:	e8 d9 14 10 00       	call   82ef176 <_ZN11pvp_assault11CAssaultMgr19OnLeaveAssaultPlaceEP5CUserb>
 81edc9d:	a1 68 f7 41 09       	mov    0x941f768,%eax
 81edca2:	8b 55 0c             	mov    0xc(%ebp),%edx
 81edca5:	89 54 24 04          	mov    %edx,0x4(%esp)
 81edca9:	89 04 24             	mov    %eax,(%esp)
 81edcac:	e8 63 05 2b 00       	call   849e214 <_ZN10expert_job13CExpertJobMgr11OnLeaveUserEP5CUser>
 81edcb1:	a1 88 f7 41 09       	mov    0x941f788,%eax
 81edcb6:	8b 55 0c             	mov    0xc(%ebp),%edx
 81edcb9:	89 54 24 04          	mov    %edx,0x4(%esp)
 81edcbd:	89 04 24             	mov    %eax,(%esp)
 81edcc0:	e8 23 ae 39 00       	call   8588ae8 <_ZN18online_preliminary25COnlinePreliminaryTeamMgr11OnLeaveUserEP5CUser>
 81edcc5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81edcc8:	89 04 24             	mov    %eax,(%esp)
 81edccb:	e8 6e ad 46 00       	call   8658a3e <_ZN5CUser20checkLogOutCorrectlyEv>
 81edcd0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81edcd3:	89 04 24             	mov    %eax,(%esp)
 81edcd6:	e8 93 c6 ee ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81edcdb:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81edcde:	8b 45 0c             	mov    0xc(%ebp),%eax
 81edce1:	89 04 24             	mov    %eax,(%esp)
 81edce4:	e8 ad af ed ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81edce9:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81edcec:	8b 45 0c             	mov    0xc(%ebp),%eax
 81edcef:	89 04 24             	mov    %eax,(%esp)
 81edcf2:	e8 41 78 45 00       	call   8645538 <_ZN15CUserCharacInfo17GetCharacPlayTickEv>
 81edcf7:	89 c3                	mov    %eax,%ebx
 81edcf9:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81edd00:	ff 
 81edd01:	8b 45 0c             	mov    0xc(%ebp),%eax
 81edd04:	89 04 24             	mov    %eax,(%esp)
 81edd07:	e8 94 02 46 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81edd0c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81edd10:	89 04 24             	mov    %eax,(%esp)
 81edd13:	e8 d6 1a 25 00       	call   843f7ee <_ZN23DB_UpdateCharacPlayTime11makeRequestEil>
 81edd18:	e8 71 e4 ed ff       	call   80cc18e <_Z14G_CGameManagerv>
 81edd1d:	8b 55 0c             	mov    0xc(%ebp),%edx
 81edd20:	89 54 24 04          	mov    %edx,0x4(%esp)
 81edd24:	89 04 24             	mov    %eax,(%esp)
 81edd27:	e8 7c a8 0a 00       	call   82985a8 <_ZN12CGameManager9user_exitEP5CUser>
 81edd2c:	0f b6 45 bb          	movzbl -0x45(%ebp),%eax
 81edd30:	84 c0                	test   %al,%al
 81edd32:	75 1f                	jne    81edd53 <_ZN15DisPatcher_Exit12dispatch_sigEP5CUserR9PacketBuf+0x40b>
 81edd34:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81edd37:	89 44 24 08          	mov    %eax,0x8(%esp)
 81edd3b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81edd42:	00 
 81edd43:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81edd46:	89 04 24             	mov    %eax,(%esp)
 81edd49:	e8 e2 cf 23 00       	call   842ad30 <_ZN23DB_ArrangeUserLoginInfo11makeRequestEjbj>
 81edd4e:	e9 8c 00 00 00       	jmp    81edddf <_ZN15DisPatcher_Exit12dispatch_sigEP5CUserR9PacketBuf+0x497>
 81edd53:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81edd56:	89 44 24 08          	mov    %eax,0x8(%esp)
 81edd5a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81edd61:	00 
 81edd62:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81edd65:	89 04 24             	mov    %eax,(%esp)
 81edd68:	e8 c3 cf 23 00       	call   842ad30 <_ZN23DB_ArrangeUserLoginInfo11makeRequestEjbj>
 81edd6d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81edd70:	89 04 24             	mov    %eax,(%esp)
 81edd73:	e8 a8 1f 04 00       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 81edd78:	89 04 24             	mov    %eax,(%esp)
 81edd7b:	e8 9a 11 04 00       	call   822ef1a <_ZNK8WongWork13CSecurityCard11isCertifiedEv>
 81edd80:	84 c0                	test   %al,%al
 81edd82:	74 22                	je     81edda6 <_ZN15DisPatcher_Exit12dispatch_sigEP5CUserR9PacketBuf+0x45e>
 81edd84:	8d 45 bc             	lea    -0x44(%ebp),%eax
 81edd87:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81edd8b:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 81edd92:	00 
 81edd93:	c7 44 24 04 b4 00 00 	movl   $0xb4,0x4(%esp)
 81edd9a:	00 
 81edd9b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81edd9e:	89 04 24             	mov    %eax,(%esp)
 81edda1:	e8 a8 c5 24 00       	call   843a34e <_ZN32DB_SecuServiceUpdateValidityTime11makeRequestEjjtPc>
 81edda6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81edda9:	89 04 24             	mov    %eax,(%esp)
 81eddac:	e8 7d 1f 04 00       	call   822fd2e <_ZN5CUser6getPadEv>
 81eddb1:	89 04 24             	mov    %eax,(%esp)
 81eddb4:	e8 2d 12 04 00       	call   822efe6 <_ZNK8Sanicova4CPad11isCertifiedEv>
 81eddb9:	84 c0                	test   %al,%al
 81eddbb:	74 22                	je     81edddf <_ZN15DisPatcher_Exit12dispatch_sigEP5CUserR9PacketBuf+0x497>
 81eddbd:	8d 45 bc             	lea    -0x44(%ebp),%eax
 81eddc0:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81eddc4:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 81eddcb:	00 
 81eddcc:	c7 44 24 04 b4 00 00 	movl   $0xb4,0x4(%esp)
 81eddd3:	00 
 81eddd4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81eddd7:	89 04 24             	mov    %eax,(%esp)
 81eddda:	e8 6f c5 24 00       	call   843a34e <_ZN32DB_SecuServiceUpdateValidityTime11makeRequestEjjtPc>
 81edddf:	b8 00 00 00 00       	mov    $0x0,%eax
 81edde4:	83 c4 60             	add    $0x60,%esp
 81edde7:	5b                   	pop    %ebx
 81edde8:	5e                   	pop    %esi
 81edde9:	5d                   	pop    %ebp
 81eddea:	c3                   	ret
 81eddeb:	90                   	nop

```

```c
// DisPatcher_Exit::dispatch_sig @ 0x81ed948

/* DisPatcher_Exit::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_Exit::dispatch_sig(DisPatcher_Exit *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  GameWorld *this_00;
  Arad_DataManager *this_01;
  Arad_EventPeriodDataManager *this_02;
  undefined4 uVar6;
  CMonitorServerProxy *this_03;
  undefined4 *puVar7;
  CAssaultMgr *this_04;
  long lVar8;
  CGameManager *this_05;
  CSecurityCard *this_06;
  CPad *this_07;
  uchar local_49;
  char local_48 [16];
  string local_38 [7];
  allocator<char> local_31;
  cMyTrace local_30 [16];
  CExpandEquipslot *local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  CNetwork<4096,450000>::GetPeerIP2((CNetwork<4096,450000> *)(param_1 + 0xe0),local_48,0x10);
  local_49 = '\0';
  cVar1 = PacketBuf::get_byte(param_2,&local_49);
  if (cVar1 != '\x01') {
    local_49 = '\0';
  }
  if (param_1 != (CUser *)0x0) {
    CUser::SetLogInOutState(param_1,local_49);
  }
  cVar1 = WongWork::CMCAPManager::IsSaveCleanPadPoint((CMCAPManager *)(param_1 + 0x8e3f0));
  if (cVar1 != '\0') {
    iVar4 = CUser::get_acc_id(param_1);
    uVar5 = WongWork::CMCAPManager::getPoint((CMCAPManager *)(param_1 + 0x8e3f0));
    DB_SaveCleanpadPoint::makeRequest(uVar5,iVar4);
    WongWork::CMCAPManager::disableCleanPadPoint((CMCAPManager *)(param_1 + 0x8e3f0));
  }
  iVar4 = CUser::get_state(param_1);
  if (2 < iVar4) {
    this_00 = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::IsEquipSlotSwitchChannel(this_00);
    if (cVar1 != '\0') {
      cVar1 = CUserCharacInfo::getCurChannelEquipslotSwitch((CUserCharacInfo *)param_1);
      if (cVar1 == '\x01') {
        local_20 = (CExpandEquipslot *)CUser::GetCharacExpandData(param_1,9);
        cVar1 = CUserCharacInfo::getCurExpandEquipslotSwitch((CUserCharacInfo *)param_1);
        cVar2 = CUserCharacInfo::getCurChannelEquipslotSwitch((CUserCharacInfo *)param_1);
        CExpandEquipslot::EquipslotSwitch(local_20,param_1,'\0',cVar2,cVar1);
      }
    }
  }
  std::allocator<char>::allocator();
                    /* try { // try from 081edac4 to 081edac8 has its CatchHandler @ 081edb10 */
  std::string::string(local_38,"Arad_EventPeriodDataManager",(allocator *)&local_31);
                    /* try { // try from 081edac9 to 081edaeb has its CatchHandler @ 081edaee */
  this_01 = (Arad_DataManager *)ARAD::Singleton<ARAD::Arad_DataManager>::Get();
  this_02 = (Arad_EventPeriodDataManager *)
            ARAD::Arad_DataManager::findGameScript(this_01,(string)local_38);
  ARAD::Arad_EventPeriodDataManager::delUserRewardData(this_02,param_1);
                    /* try { // try from 081edb09 to 081edb0d has its CatchHandler @ 081edb10 */
  std::string::~string(local_38);
  std::allocator<char>::~allocator(&local_31);
  iVar4 = CUser::get_state(param_1);
  if (iVar4 != 0) {
    CUser::WorkPerFiveMin(param_1);
    iVar4 = CUserCharacInfo::get_charac_memberkey((CUserCharacInfo *)param_1);
    if (iVar4 != 0) {
      local_14 = CUserCharacInfo::get_member_pay_tex_money_to_upper((CUserCharacInfo *)param_1);
      local_10 = CUserCharacInfo::get_member_pay_tex_fatigue_to_upper((CUserCharacInfo *)param_1);
      uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      bVar3 = (bool)CUserCharacInfo::is_connect_upper_member((CUserCharacInfo *)param_1);
      uVar6 = CUser::GetServerGroup(param_1);
      this_03 = (CMonitorServerProxy *)
                CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                          (GlobalData::s_monitor_proxy_mgr,uVar6);
      CMonitorServerProxy::SendMemberPayTax(this_03,bVar3,uVar5,local_14,local_10);
      if (0 < local_14) {
        CUserCharacInfo::set_member_pay_tex_money_to_upper((CUserCharacInfo *)param_1,0);
      }
      if (0 < local_10) {
        CUserCharacInfo::set_member_pay_tex_fatigue_to_upper((CUserCharacInfo *)param_1,0);
      }
    }
    uVar5 = CUser::get_acc_id(param_1);
    uVar6 = NumberToString(uVar5,0);
    cMyTrace::cMyTrace(local_30,"virtual int DisPatcher_Exit::dispatch_sig(CUser*, PacketBuf&)",
                       0x706d,0);
    cMyTrace::operator()(local_30,"[USER LOGOUT (Normal)] DB ID : %s\n",uVar6);
    puVar7 = (undefined4 *)private_store::GetInstancePrivateStoreMgr();
    (**(code **)*puVar7)(puVar7,param_1);
    this_04 = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
    pvp_assault::CAssaultMgr::OnLeaveAssaultPlace(this_04,param_1,true);
    expert_job::CExpertJobMgr::OnLeaveUser(GlobalData::s_ExpertJobMgr,param_1);
    online_preliminary::COnlinePreliminaryTeamMgr::OnLeaveUser
              (GlobalData::s_onlinePreliminaryTeamMgr,param_1);
    CUser::checkLogOutCorrectly(param_1);
    local_1c = CUser::get_acc_id(param_1);
    local_18 = CUser::GetUID(param_1);
    lVar8 = CUserCharacInfo::GetCharacPlayTick((CUserCharacInfo *)param_1);
    iVar4 = CUser::get_charac_no(param_1,-1);
    DB_UpdateCharacPlayTime::makeRequest(iVar4,lVar8);
    this_05 = (CGameManager *)G_CGameManager();
    CGameManager::user_exit(this_05,param_1);
    if (local_49 == '\0') {
      DB_ArrangeUserLoginInfo::makeRequest(local_1c,true,local_18);
    }
    else {
      DB_ArrangeUserLoginInfo::makeRequest(local_1c,false,local_18);
      this_06 = (CSecurityCard *)CUser::getSecurityCard(param_1);
      cVar1 = WongWork::CSecurityCard::isCertified(this_06);
      if (cVar1 != '\0') {
        DB_SecuServiceUpdateValidityTime::makeRequest(local_1c,0xb4,8,local_48);
      }
      this_07 = (CPad *)CUser::getPad(param_1);
      cVar1 = Sanicova::CPad::isCertified(this_07);
      if (cVar1 != '\0') {
        DB_SecuServiceUpdateValidityTime::makeRequest(local_1c,0xb4,0x10,local_48);
      }
    }
  }
  return 0;
}

```

