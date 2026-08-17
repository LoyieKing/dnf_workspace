# Inter_Disconnect

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084beb3c Inter_Disconnect::dispatch_sig  [0x084beb3c-0x84bee05] ===
 84beb3c:	55                   	push   %ebp
 84beb3d:	89 e5                	mov    %esp,%ebp
 84beb3f:	56                   	push   %esi
 84beb40:	53                   	push   %ebx
 84beb41:	83 ec 40             	sub    $0x40,%esp
 84beb44:	8b 45 0c             	mov    0xc(%ebp),%eax
 84beb47:	89 04 24             	mov    %eax,(%esp)
 84beb4a:	e8 3d b8 c1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84beb4f:	85 c0                	test   %eax,%eax
 84beb51:	0f 94 c0             	sete   %al
 84beb54:	84 c0                	test   %al,%al
 84beb56:	74 36                	je     84beb8e <_ZN16Inter_Disconnect12dispatch_sigEP5CUserPci+0x52>
 84beb58:	c7 44 24 10 3a 70 c8 	movl   $0x8c8703a,0x10(%esp)
 84beb5f:	08 
 84beb60:	c7 44 24 0c 51 06 00 	movl   $0x651,0xc(%esp)
 84beb67:	00 
 84beb68:	c7 44 24 08 60 e2 c8 	movl   $0x8c8e260,0x8(%esp)
 84beb6f:	08 
 84beb70:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84beb77:	08 
 84beb78:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84beb7f:	e8 86 50 61 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84beb84:	b8 00 00 00 00       	mov    $0x0,%eax
 84beb89:	e9 70 02 00 00       	jmp    84bedfe <_ZN16Inter_Disconnect12dispatch_sigEP5CUserPci+0x2c2>
 84beb8e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84beb91:	89 04 24             	mov    %eax,(%esp)
 84beb94:	e8 f3 b7 c1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84beb99:	83 f8 02             	cmp    $0x2,%eax
 84beb9c:	0f 9f c0             	setg   %al
 84beb9f:	84 c0                	test   %al,%al
 84beba1:	74 79                	je     84bec1c <_ZN16Inter_Disconnect12dispatch_sigEP5CUserPci+0xe0>
 84beba3:	e8 ff b7 c1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84beba8:	89 04 24             	mov    %eax,(%esp)
 84bebab:	e8 8e 58 d7 ff       	call   823443e <_ZNK9GameWorld24IsEquipSlotSwitchChannelEv>
 84bebb0:	84 c0                	test   %al,%al
 84bebb2:	74 68                	je     84bec1c <_ZN16Inter_Disconnect12dispatch_sigEP5CUserPci+0xe0>
 84bebb4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bebb7:	89 04 24             	mov    %eax,(%esp)
 84bebba:	e8 bd 0e d7 ff       	call   822fa7c <_ZN15CUserCharacInfo28getCurChannelEquipslotSwitchEv>
 84bebbf:	3c 01                	cmp    $0x1,%al
 84bebc1:	0f 94 c0             	sete   %al
 84bebc4:	84 c0                	test   %al,%al
 84bebc6:	74 54                	je     84bec1c <_ZN16Inter_Disconnect12dispatch_sigEP5CUserPci+0xe0>
 84bebc8:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 84bebcf:	00 
 84bebd0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bebd3:	89 04 24             	mov    %eax,(%esp)
 84bebd6:	e8 a9 e9 c1 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84bebdb:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84bebde:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bebe1:	89 04 24             	mov    %eax,(%esp)
 84bebe4:	e8 b7 0e d7 ff       	call   822faa0 <_ZN15CUserCharacInfo27getCurExpandEquipslotSwitchEv>
 84bebe9:	0f be d8             	movsbl %al,%ebx
 84bebec:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bebef:	89 04 24             	mov    %eax,(%esp)
 84bebf2:	e8 85 0e d7 ff       	call   822fa7c <_ZN15CUserCharacInfo28getCurChannelEquipslotSwitchEv>
 84bebf7:	0f be c0             	movsbl %al,%eax
 84bebfa:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84bebfe:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84bec02:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84bec09:	00 
 84bec0a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bec0d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84bec11:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84bec14:	89 04 24             	mov    %eax,(%esp)
 84bec17:	e8 22 a8 fd ff       	call   849943e <_ZN16CExpandEquipslot15EquipslotSwitchEP5CUserccc>
 84bec1c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bec1f:	89 04 24             	mov    %eax,(%esp)
 84bec22:	e8 e5 42 19 00       	call   8652f0c <_ZN5CUser14WorkPerFiveMinEv>
 84bec27:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bec2a:	89 04 24             	mov    %eax,(%esp)
 84bec2d:	e8 92 09 d7 ff       	call   822f5c4 <_ZN15CUserCharacInfo20get_charac_memberkeyEv>
 84bec32:	85 c0                	test   %eax,%eax
 84bec34:	0f 95 c0             	setne  %al
 84bec37:	84 c0                	test   %al,%al
 84bec39:	0f 84 a4 00 00 00    	je     84bece3 <_ZN16Inter_Disconnect12dispatch_sigEP5CUserPci+0x1a7>
 84bec3f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bec42:	89 04 24             	mov    %eax,(%esp)
 84bec45:	e8 c8 09 d7 ff       	call   822f612 <_ZNK15CUserCharacInfo33get_member_pay_tex_money_to_upperEv>
 84bec4a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84bec4d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bec50:	89 04 24             	mov    %eax,(%esp)
 84bec53:	e8 fa 09 d7 ff       	call   822f652 <_ZNK15CUserCharacInfo35get_member_pay_tex_fatigue_to_upperEv>
 84bec58:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84bec5b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bec5e:	89 04 24             	mov    %eax,(%esp)
 84bec61:	e8 e8 cf c0 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84bec66:	89 c3                	mov    %eax,%ebx
 84bec68:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bec6b:	89 04 24             	mov    %eax,(%esp)
 84bec6e:	e8 73 09 d7 ff       	call   822f5e6 <_ZN15CUserCharacInfo23is_connect_upper_memberEv>
 84bec73:	0f b6 f0             	movzbl %al,%esi
 84bec76:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bec79:	89 04 24             	mov    %eax,(%esp)
 84bec7c:	e8 0f d0 c0 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84bec81:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 84bec87:	89 44 24 04          	mov    %eax,0x4(%esp)
 84bec8b:	89 14 24             	mov    %edx,(%esp)
 84bec8e:	e8 f7 33 c5 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84bec93:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84bec96:	89 54 24 10          	mov    %edx,0x10(%esp)
 84bec9a:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84bec9d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84beca1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84beca5:	89 74 24 04          	mov    %esi,0x4(%esp)
 84beca9:	89 04 24             	mov    %eax,(%esp)
 84becac:	e8 03 23 fb ff       	call   8470fb4 <_ZN19CMonitorServerProxy16SendMemberPayTaxEbjii>
 84becb1:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 84becb5:	7e 13                	jle    84becca <_ZN16Inter_Disconnect12dispatch_sigEP5CUserPci+0x18e>
 84becb7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84becba:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84becc1:	00 
 84becc2:	89 04 24             	mov    %eax,(%esp)
 84becc5:	e8 6a 09 d7 ff       	call   822f634 <_ZN15CUserCharacInfo33set_member_pay_tex_money_to_upperEi>
 84becca:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84becce:	7e 13                	jle    84bece3 <_ZN16Inter_Disconnect12dispatch_sigEP5CUserPci+0x1a7>
 84becd0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84becd3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84becda:	00 
 84becdb:	89 04 24             	mov    %eax,(%esp)
 84becde:	e8 91 09 d7 ff       	call   822f674 <_ZN15CUserCharacInfo35set_member_pay_tex_fatigue_to_upperEi>
 84bece3:	e8 00 5f 10 00       	call   85c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>
 84bece8:	8b 10                	mov    (%eax),%edx
 84becea:	8b 0a                	mov    (%edx),%ecx
 84becec:	8b 55 0c             	mov    0xc(%ebp),%edx
 84becef:	89 54 24 04          	mov    %edx,0x4(%esp)
 84becf3:	89 04 24             	mov    %eax,(%esp)
 84becf6:	ff d1                	call   *%ecx
 84becf8:	e8 a3 63 d7 ff       	call   82350a0 <_ZN11pvp_assault21GetInstanceAssaultMgrEv>
 84becfd:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84bed04:	00 
 84bed05:	8b 55 0c             	mov    0xc(%ebp),%edx
 84bed08:	89 54 24 04          	mov    %edx,0x4(%esp)
 84bed0c:	89 04 24             	mov    %eax,(%esp)
 84bed0f:	e8 62 04 e3 ff       	call   82ef176 <_ZN11pvp_assault11CAssaultMgr19OnLeaveAssaultPlaceEP5CUserb>
 84bed14:	a1 68 f7 41 09       	mov    0x941f768,%eax
 84bed19:	8b 55 0c             	mov    0xc(%ebp),%edx
 84bed1c:	89 54 24 04          	mov    %edx,0x4(%esp)
 84bed20:	89 04 24             	mov    %eax,(%esp)
 84bed23:	e8 ec f4 fd ff       	call   849e214 <_ZN10expert_job13CExpertJobMgr11OnLeaveUserEP5CUser>
 84bed28:	a1 88 f7 41 09       	mov    0x941f788,%eax
 84bed2d:	8b 55 0c             	mov    0xc(%ebp),%edx
 84bed30:	89 54 24 04          	mov    %edx,0x4(%esp)
 84bed34:	89 04 24             	mov    %eax,(%esp)
 84bed37:	e8 ac 9d 0c 00       	call   8588ae8 <_ZN18online_preliminary25COnlinePreliminaryTeamMgr11OnLeaveUserEP5CUser>
 84bed3c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bed3f:	89 04 24             	mov    %eax,(%esp)
 84bed42:	e8 27 b6 c1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84bed47:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84bed4a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bed4d:	89 04 24             	mov    %eax,(%esp)
 84bed50:	e8 41 9f c0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84bed55:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84bed58:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bed5b:	05 f0 e3 08 00       	add    $0x8e3f0,%eax
 84bed60:	89 04 24             	mov    %eax,(%esp)
 84bed63:	e8 76 01 d7 ff       	call   822eede <_ZN8WongWork12CMCAPManager19IsSaveCleanPadPointEv>
 84bed68:	84 c0                	test   %al,%al
 84bed6a:	74 39                	je     84beda5 <_ZN16Inter_Disconnect12dispatch_sigEP5CUserPci+0x269>
 84bed6c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bed6f:	89 04 24             	mov    %eax,(%esp)
 84bed72:	e8 f7 b5 c1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84bed77:	89 c3                	mov    %eax,%ebx
 84bed79:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bed7c:	05 f0 e3 08 00       	add    $0x8e3f0,%eax
 84bed81:	89 04 24             	mov    %eax,(%esp)
 84bed84:	e8 1b 01 d7 ff       	call   822eea4 <_ZN8WongWork12CMCAPManager8getPointEv>
 84bed89:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84bed8d:	89 04 24             	mov    %eax,(%esp)
 84bed90:	e8 4d 42 f7 ff       	call   8432fe2 <_ZN20DB_SaveCleanpadPoint11makeRequestEji>
 84bed95:	8b 45 0c             	mov    0xc(%ebp),%eax
 84bed98:	05 f0 e3 08 00       	add    $0x8e3f0,%eax
 84bed9d:	89 04 24             	mov    %eax,(%esp)
 84beda0:	e8 45 01 d7 ff       	call   822eeea <_ZN8WongWork12CMCAPManager20disableCleanPadPointEv>
 84beda5:	e8 e4 d3 c0 ff       	call   80cc18e <_Z14G_CGameManagerv>
 84bedaa:	8b 55 0c             	mov    0xc(%ebp),%edx
 84bedad:	89 54 24 04          	mov    %edx,0x4(%esp)
 84bedb1:	89 04 24             	mov    %eax,(%esp)
 84bedb4:	e8 8f 9d dd ff       	call   8298b48 <_ZN12CGameManager15user_disconnectEP5CUser>
 84bedb9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84bedbc:	89 44 24 08          	mov    %eax,0x8(%esp)
 84bedc0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84bedc7:	00 
 84bedc8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84bedcb:	89 04 24             	mov    %eax,(%esp)
 84bedce:	e8 5d bf f6 ff       	call   842ad30 <_ZN23DB_ArrangeUserLoginInfo11makeRequestEjbj>
 84bedd3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84bedda:	00 
 84beddb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84bedde:	89 04 24             	mov    %eax,(%esp)
 84bede1:	e8 02 cf f6 ff       	call   842bce8 <_ZN33DB_SecurityCardUpdateValidityTime11makeRequestEjj>
 84bede6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84beded:	00 
 84bedee:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84bedf1:	89 04 24             	mov    %eax,(%esp)
 84bedf4:	e8 b5 04 f7 ff       	call   842f2ae <_ZN30DB_GoblinPadUpdateValidityTime11makeRequestEjj>
 84bedf9:	b8 00 00 00 00       	mov    $0x0,%eax
 84bedfe:	83 c4 40             	add    $0x40,%esp
 84bee01:	5b                   	pop    %ebx
 84bee02:	5e                   	pop    %esi
 84bee03:	5d                   	pop    %ebp
 84bee04:	c3                   	ret
 84bee05:	90                   	nop

```

```c
// Inter_Disconnect::dispatch_sig @ 0x84beb3c

/* Inter_Disconnect::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_Disconnect::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  GameWorld *this;
  CExpandEquipslot *this_00;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  CMonitorServerProxy *this_01;
  undefined4 *puVar8;
  CAssaultMgr *this_02;
  uint uVar9;
  uint uVar10;
  CGameManager *this_03;
  
  iVar4 = CUser::get_state((CUser *)param_2);
  if (iVar4 == 0) {
    LogManager::logFormat
              (1,"InterDispatcher.cpp",
               "virtual int Inter_Disconnect::dispatch_sig(CUser*, char*, int)",0x651,"State(NONE)")
    ;
  }
  else {
    iVar4 = CUser::get_state((CUser *)param_2);
    if (2 < iVar4) {
      this = (GameWorld *)G_GameWorld();
      cVar1 = GameWorld::IsEquipSlotSwitchChannel(this);
      if (cVar1 != '\0') {
        cVar1 = CUserCharacInfo::getCurChannelEquipslotSwitch((CUserCharacInfo *)param_2);
        if (cVar1 == '\x01') {
          this_00 = (CExpandEquipslot *)CUser::GetCharacExpandData((CUser *)param_2,9);
          cVar1 = CUserCharacInfo::getCurExpandEquipslotSwitch((CUserCharacInfo *)param_2);
          cVar2 = CUserCharacInfo::getCurChannelEquipslotSwitch((CUserCharacInfo *)param_2);
          CExpandEquipslot::EquipslotSwitch(this_00,(CUser *)param_2,'\0',cVar2,cVar1);
        }
      }
    }
    CUser::WorkPerFiveMin((CUser *)param_2);
    iVar4 = CUserCharacInfo::get_charac_memberkey((CUserCharacInfo *)param_2);
    if (iVar4 != 0) {
      iVar4 = CUserCharacInfo::get_member_pay_tex_money_to_upper((CUserCharacInfo *)param_2);
      iVar5 = CUserCharacInfo::get_member_pay_tex_fatigue_to_upper((CUserCharacInfo *)param_2);
      uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
      bVar3 = (bool)CUserCharacInfo::is_connect_upper_member((CUserCharacInfo *)param_2);
      uVar7 = CUser::GetServerGroup((CUser *)param_2);
      this_01 = (CMonitorServerProxy *)
                CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                          (GlobalData::s_monitor_proxy_mgr,uVar7);
      CMonitorServerProxy::SendMemberPayTax(this_01,bVar3,uVar6,iVar4,iVar5);
      if (0 < iVar4) {
        CUserCharacInfo::set_member_pay_tex_money_to_upper((CUserCharacInfo *)param_2,0);
      }
      if (0 < iVar5) {
        CUserCharacInfo::set_member_pay_tex_fatigue_to_upper((CUserCharacInfo *)param_2,0);
      }
    }
    puVar8 = (undefined4 *)private_store::GetInstancePrivateStoreMgr();
    (**(code **)*puVar8)(puVar8,param_2);
    this_02 = (CAssaultMgr *)pvp_assault::GetInstanceAssaultMgr();
    pvp_assault::CAssaultMgr::OnLeaveAssaultPlace(this_02,(CUser *)param_2,true);
    expert_job::CExpertJobMgr::OnLeaveUser(GlobalData::s_ExpertJobMgr,(CUser *)param_2);
    online_preliminary::COnlinePreliminaryTeamMgr::OnLeaveUser
              (GlobalData::s_onlinePreliminaryTeamMgr,(CUser *)param_2);
    uVar6 = CUser::get_acc_id((CUser *)param_2);
    uVar9 = CUser::GetUID((CUser *)param_2);
    cVar1 = WongWork::CMCAPManager::IsSaveCleanPadPoint((CMCAPManager *)(param_2 + 0x8e3f0));
    if (cVar1 != '\0') {
      iVar4 = CUser::get_acc_id((CUser *)param_2);
      uVar10 = WongWork::CMCAPManager::getPoint((CMCAPManager *)(param_2 + 0x8e3f0));
      DB_SaveCleanpadPoint::makeRequest(uVar10,iVar4);
      WongWork::CMCAPManager::disableCleanPadPoint((CMCAPManager *)(param_2 + 0x8e3f0));
    }
    this_03 = (CGameManager *)G_CGameManager();
    CGameManager::user_disconnect(this_03,(CUser *)param_2);
    DB_ArrangeUserLoginInfo::makeRequest(uVar6,true,uVar9);
    DB_SecurityCardUpdateValidityTime::makeRequest(uVar6,0);
    DB_GoblinPadUpdateValidityTime::makeRequest(uVar6,0);
  }
  return 0;
}

```

