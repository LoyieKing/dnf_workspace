# EventClassify__CPcRoomPlayTime

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## get_db_table_name

```asm
// === 08110864 EventClassify::CPcRoomPlayTime::get_db_table_name  [0x08110864-0x8110871] ===
 8110864:	55                   	push   %ebp
 8110865:	89 e5                	mov    %esp,%ebp
 8110867:	8b 45 08             	mov    0x8(%ebp),%eax
 811086a:	8b 40 1c             	mov    0x1c(%eax),%eax
 811086d:	83 c0 08             	add    $0x8,%eax
 8110870:	5d                   	pop    %ebp
 8110871:	c3                   	ret

```

```c
// EventClassify::CPcRoomPlayTime::get_db_table_name @ 0x8110864

/* EventClassify::CPcRoomPlayTime::get_db_table_name() */

int __thiscall EventClassify::CPcRoomPlayTime::get_db_table_name(CPcRoomPlayTime *this)

{
  return *(int *)(this + 0x1c) + 8;
}

```

---

## is_eventing

```asm
// === 08110814 EventClassify::CPcRoomPlayTime::is_eventing  [0x08110814-0x8110863] ===
 8110814:	55                   	push   %ebp
 8110815:	89 e5                	mov    %esp,%ebp
 8110817:	83 ec 18             	sub    $0x18,%esp
 811081a:	8b 45 08             	mov    0x8(%ebp),%eax
 811081d:	89 04 24             	mov    %eax,(%esp)
 8110820:	e8 f1 a7 ff ff       	call   810b016 <_ZN13EventClassify12CEventEntity11is_eventingEv>
 8110825:	84 c0                	test   %al,%al
 8110827:	74 34                	je     811085d <_ZN13EventClassify15CPcRoomPlayTime11is_eventingEv+0x49>
 8110829:	a1 30 f7 41 09       	mov    0x941f730,%eax
 811082e:	c7 44 24 04 5c 00 00 	movl   $0x5c,0x4(%esp)
 8110835:	00 
 8110836:	89 04 24             	mov    %eax,(%esp)
 8110839:	e8 5a 51 00 00       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 811083e:	8b 10                	mov    (%eax),%edx
 8110840:	83 c2 34             	add    $0x34,%edx
 8110843:	8b 12                	mov    (%edx),%edx
 8110845:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 811084c:	00 
 811084d:	89 04 24             	mov    %eax,(%esp)
 8110850:	ff d2                	call   *%edx
 8110852:	84 c0                	test   %al,%al
 8110854:	74 07                	je     811085d <_ZN13EventClassify15CPcRoomPlayTime11is_eventingEv+0x49>
 8110856:	b8 01 00 00 00       	mov    $0x1,%eax
 811085b:	eb 05                	jmp    8110862 <_ZN13EventClassify15CPcRoomPlayTime11is_eventingEv+0x4e>
 811085d:	b8 00 00 00 00       	mov    $0x0,%eax
 8110862:	c9                   	leave
 8110863:	c3                   	ret

```

```c
// EventClassify::CPcRoomPlayTime::is_eventing @ 0x8110814

/* EventClassify::CPcRoomPlayTime::is_eventing() */

undefined4 __thiscall EventClassify::CPcRoomPlayTime::is_eventing(CPcRoomPlayTime *this)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = CEventEntity::is_eventing((CEventEntity *)this);
  if (cVar1 != '\0') {
    piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x5c);
    cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

```

---

## processEventPcRoomPlayTime

```asm
// === 0811089c EventClassify::CPcRoomPlayTime::processEventPcRoomPlayTime  [0x0811089c-0x8110a37] ===
 811089c:	55                   	push   %ebp
 811089d:	89 e5                	mov    %esp,%ebp
 811089f:	57                   	push   %edi
 81108a0:	56                   	push   %esi
 81108a1:	53                   	push   %ebx
 81108a2:	83 ec 6c             	sub    $0x6c,%esp
 81108a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81108a8:	89 04 24             	mov    %eax,(%esp)
 81108ab:	e8 0a ef 57 00       	call   868f7ba <_ZN5CUser21collectPcRoomPlayTimeEv>
 81108b0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81108b3:	89 04 24             	mov    %eax,(%esp)
 81108b6:	e8 55 05 00 00       	call   8110e10 <_ZNK5CUser22getTotalPcRoomPlayTimeEv>
 81108bb:	8b 55 08             	mov    0x8(%ebp),%edx
 81108be:	8b 52 1c             	mov    0x1c(%edx),%edx
 81108c1:	8b 52 0c             	mov    0xc(%edx),%edx
 81108c4:	39 d0                	cmp    %edx,%eax
 81108c6:	0f 92 c0             	setb   %al
 81108c9:	84 c0                	test   %al,%al
 81108cb:	74 0a                	je     81108d7 <_ZN13EventClassify15CPcRoomPlayTime26processEventPcRoomPlayTimeEP5CUser+0x3b>
 81108cd:	b8 13 00 00 00       	mov    $0x13,%eax
 81108d2:	e9 59 01 00 00       	jmp    8110a30 <_ZN13EventClassify15CPcRoomPlayTime26processEventPcRoomPlayTimeEP5CUser+0x194>
 81108d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81108da:	89 04 24             	mov    %eax,(%esp)
 81108dd:	e8 ee 04 00 00       	call   8110dd0 <_ZN5CUser26incPcRoomPlayTimeRewardCntEv>
 81108e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81108e5:	89 04 24             	mov    %eax,(%esp)
 81108e8:	e8 ff 04 00 00       	call   8110dec <_ZNK5CUser26getPcRoomPlayTimeRewardCntEv>
 81108ed:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 81108f0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81108f3:	89 04 24             	mov    %eax,(%esp)
 81108f6:	e8 15 05 00 00       	call   8110e10 <_ZNK5CUser22getTotalPcRoomPlayTimeEv>
 81108fb:	89 c7                	mov    %eax,%edi
 81108fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8110900:	89 04 24             	mov    %eax,(%esp)
 8110903:	e8 46 b3 fb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8110908:	89 c6                	mov    %eax,%esi
 811090a:	8b 45 0c             	mov    0xc(%ebp),%eax
 811090d:	89 04 24             	mov    %eax,(%esp)
 8110910:	e8 59 9a fc ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8110915:	89 c3                	mov    %eax,%ebx
 8110917:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 811091e:	00 
 811091f:	c7 44 24 08 ea 08 00 	movl   $0x8ea,0x8(%esp)
 8110926:	00 
 8110927:	c7 44 24 04 a0 d1 b4 	movl   $0x8b4d1a0,0x4(%esp)
 811092e:	08 
 811092f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8110932:	89 04 24             	mov    %eax,(%esp)
 8110935:	e8 de ed 43 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 811093a:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 811093d:	89 44 24 14          	mov    %eax,0x14(%esp)
 8110941:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8110945:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8110949:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 811094d:	c7 44 24 04 2c c5 b4 	movl   $0x8b4c52c,0x4(%esp)
 8110954:	08 
 8110955:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8110958:	89 04 24             	mov    %eax,(%esp)
 811095b:	e8 28 ee 43 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8110960:	8b 45 0c             	mov    0xc(%ebp),%eax
 8110963:	89 04 24             	mov    %eax,(%esp)
 8110966:	e8 93 04 00 00       	call   8110dfe <_ZN5CUser24resetTotalPcRoomPlayTimeEv>
 811096b:	8b 45 0c             	mov    0xc(%ebp),%eax
 811096e:	89 04 24             	mov    %eax,(%esp)
 8110971:	e8 76 04 00 00       	call   8110dec <_ZNK5CUser26getPcRoomPlayTimeRewardCntEv>
 8110976:	0f b6 f0             	movzbl %al,%esi
 8110979:	8b 45 0c             	mov    0xc(%ebp),%eax
 811097c:	89 04 24             	mov    %eax,(%esp)
 811097f:	e8 8c 04 00 00       	call   8110e10 <_ZNK5CUser22getTotalPcRoomPlayTimeEv>
 8110984:	89 c3                	mov    %eax,%ebx
 8110986:	8b 45 0c             	mov    0xc(%ebp),%eax
 8110989:	89 04 24             	mov    %eax,(%esp)
 811098c:	e8 dd 99 fc ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8110991:	89 74 24 08          	mov    %esi,0x8(%esp)
 8110995:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8110999:	89 04 24             	mov    %eax,(%esp)
 811099c:	e8 2f 72 33 00       	call   8447bd0 <_ZN26DB_SavePcRoomPlayTimeEvent11makeRequestEjjh>
 81109a1:	8d 45 c5             	lea    -0x3b(%ebp),%eax
 81109a4:	89 04 24             	mov    %eax,(%esp)
 81109a7:	e8 5e 02 00 00       	call   8110c0a <_ZN27Packet_PcRoomPlayTimeRewardC1Ev>
 81109ac:	e8 f6 99 fc ff       	call   80da3a7 <_Z11G_GameWorldv>
 81109b1:	89 04 24             	mov    %eax,(%esp)
 81109b4:	e8 65 09 fe ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 81109b9:	84 c0                	test   %al,%al
 81109bb:	74 10                	je     81109cd <_ZN13EventClassify15CPcRoomPlayTime26processEventPcRoomPlayTimeEP5CUser+0x131>
 81109bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 81109c0:	89 04 24             	mov    %eax,(%esp)
 81109c3:	e8 c8 b2 fb ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81109c8:	88 45 cf             	mov    %al,-0x31(%ebp)
 81109cb:	eb 0e                	jmp    81109db <_ZN13EventClassify15CPcRoomPlayTime26processEventPcRoomPlayTimeEP5CUser+0x13f>
 81109cd:	e8 af b7 fb ff       	call   80cc181 <_Z14G_CEnvironmentv>
 81109d2:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 81109d8:	88 45 cf             	mov    %al,-0x31(%ebp)
 81109db:	8b 45 0c             	mov    0xc(%ebp),%eax
 81109de:	89 04 24             	mov    %eax,(%esp)
 81109e1:	e8 88 99 fc ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81109e6:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81109e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81109ec:	89 04 24             	mov    %eax,(%esp)
 81109ef:	e8 5a b2 fb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81109f4:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81109f7:	8d 5d c5             	lea    -0x3b(%ebp),%ebx
 81109fa:	8b 45 0c             	mov    0xc(%ebp),%eax
 81109fd:	89 04 24             	mov    %eax,(%esp)
 8110a00:	e8 8b b2 fb ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8110a05:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 8110a0b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8110a0f:	89 14 24             	mov    %edx,(%esp)
 8110a12:	e8 73 16 00 00       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 8110a17:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 8110a1e:	00 
 8110a1f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8110a23:	89 04 24             	mov    %eax,(%esp)
 8110a26:	e8 c9 03 36 00       	call   8470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>
 8110a2b:	b8 00 00 00 00       	mov    $0x0,%eax
 8110a30:	83 c4 6c             	add    $0x6c,%esp
 8110a33:	5b                   	pop    %ebx
 8110a34:	5e                   	pop    %esi
 8110a35:	5f                   	pop    %edi
 8110a36:	5d                   	pop    %ebp
 8110a37:	c3                   	ret

```

```c
// EventClassify::CPcRoomPlayTime::processEventPcRoomPlayTime @ 0x811089c

/* EventClassify::CPcRoomPlayTime::processEventPcRoomPlayTime(CUser*) */

undefined4 __thiscall
EventClassify::CPcRoomPlayTime::processEventPcRoomPlayTime(CPcRoomPlayTime *this,CUser *param_1)

{
  uchar uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  GameWorld *this_00;
  int iVar9;
  CMonitorServerProxy *this_01;
  Packet_PcRoomPlayTimeReward local_3f [10];
  undefined1 local_35;
  undefined4 local_34;
  undefined4 local_30;
  cMyTrace local_2c [28];
  
  CUser::collectPcRoomPlayTime(param_1);
  uVar3 = CUser::getTotalPcRoomPlayTime(param_1);
  if (uVar3 < *(uint *)(*(int *)(this + 0x1c) + 0xc)) {
    uVar4 = 0x13;
  }
  else {
    CUser::incPcRoomPlayTimeRewardCnt(param_1);
    uVar4 = CUser::getPcRoomPlayTimeRewardCnt(param_1);
    uVar5 = CUser::getTotalPcRoomPlayTime(param_1);
    uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    uVar7 = CUser::get_acc_id(param_1);
    cMyTrace::cMyTrace(local_2c,
                       "int EventClassify::CPcRoomPlayTime::processEventPcRoomPlayTime(CUser*)",
                       0x8ea,0);
    cMyTrace::operator()
              (local_2c,
               "<PCROOM_PLAY_TIME_EVENT> send_reward m_id(%d), charac_no(%d), total_time(%d), reward_cnt(%d)"
               ,uVar7,uVar6,uVar5,uVar4);
    CUser::resetTotalPcRoomPlayTime(param_1);
    uVar1 = CUser::getPcRoomPlayTimeRewardCnt(param_1);
    uVar3 = CUser::getTotalPcRoomPlayTime(param_1);
    uVar8 = CUser::get_acc_id(param_1);
    DB_SavePcRoomPlayTimeEvent::makeRequest(uVar8,uVar3,uVar1);
    Packet_PcRoomPlayTimeReward::Packet_PcRoomPlayTimeReward(local_3f);
    this_00 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsIntegratedPvPBaseChannel(this_00);
    if (cVar2 == '\0') {
      iVar9 = G_CEnvironment();
      local_35 = (undefined1)*(undefined4 *)(iVar9 + 0x378);
    }
    else {
      local_35 = CUser::GetServerGroup(param_1);
    }
    local_34 = CUser::get_acc_id(param_1);
    local_30 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    uVar4 = CUser::GetServerGroup(param_1);
    this_01 = (CMonitorServerProxy *)
              CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                        (GlobalData::s_monitor_proxy_mgr,uVar4);
    CMonitorServerProxy::SendPacket(this_01,(char *)local_3f,0x13);
    uVar4 = 0;
  }
  return uVar4;
}

```

---

## set_event_data

```asm
// === 08110872 EventClassify::CPcRoomPlayTime::set_event_data  [0x08110872-0x811089b] ===
 8110872:	55                   	push   %ebp
 8110873:	89 e5                	mov    %esp,%ebp
 8110875:	83 ec 18             	sub    $0x18,%esp
 8110878:	8b 45 08             	mov    0x8(%ebp),%eax
 811087b:	8b 00                	mov    (%eax),%eax
 811087d:	83 c0 18             	add    $0x18,%eax
 8110880:	8b 08                	mov    (%eax),%ecx
 8110882:	8b 45 08             	mov    0x8(%ebp),%eax
 8110885:	8b 55 0c             	mov    0xc(%ebp),%edx
 8110888:	89 54 24 04          	mov    %edx,0x4(%esp)
 811088c:	89 04 24             	mov    %eax,(%esp)
 811088f:	ff d1                	call   *%ecx
 8110891:	8b 55 10             	mov    0x10(%ebp),%edx
 8110894:	8b 45 08             	mov    0x8(%ebp),%eax
 8110897:	89 50 1c             	mov    %edx,0x1c(%eax)
 811089a:	c9                   	leave
 811089b:	c3                   	ret

```

```c
// EventClassify::CPcRoomPlayTime::set_event_data @ 0x8110872

/* EventClassify::CPcRoomPlayTime::set_event_data(int, InGameEventScript*) */

void __thiscall
EventClassify::CPcRoomPlayTime::set_event_data
          (CPcRoomPlayTime *this,int param_1,InGameEventScript *param_2)

{
  (**(code **)(*(int *)this + 0x18))(this,param_1);
  *(InGameEventScript **)(this + 0x1c) = param_2;
  return;
}

```

---

## verifyUserPcRoomPlayEvent

```asm
// === 08110a38 EventClassify::CPcRoomPlayTime::verifyUserPcRoomPlayEvent  [0x08110a38-0x8110aad] ===
 8110a38:	55                   	push   %ebp
 8110a39:	89 e5                	mov    %esp,%ebp
 8110a3b:	83 ec 18             	sub    $0x18,%esp
 8110a3e:	8b 45 08             	mov    0x8(%ebp),%eax
 8110a41:	8b 00                	mov    (%eax),%eax
 8110a43:	83 c0 08             	add    $0x8,%eax
 8110a46:	8b 10                	mov    (%eax),%edx
 8110a48:	8b 45 08             	mov    0x8(%ebp),%eax
 8110a4b:	89 04 24             	mov    %eax,(%esp)
 8110a4e:	ff d2                	call   *%edx
 8110a50:	83 f0 01             	xor    $0x1,%eax
 8110a53:	84 c0                	test   %al,%al
 8110a55:	74 07                	je     8110a5e <_ZN13EventClassify15CPcRoomPlayTime25verifyUserPcRoomPlayEventEP5CUser+0x26>
 8110a57:	b8 b2 00 00 00       	mov    $0xb2,%eax
 8110a5c:	eb 4e                	jmp    8110aac <_ZN13EventClassify15CPcRoomPlayTime25verifyUserPcRoomPlayEventEP5CUser+0x74>
 8110a5e:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 8110a65:	00 
 8110a66:	8b 45 0c             	mov    0xc(%ebp),%eax
 8110a69:	89 04 24             	mov    %eax,(%esp)
 8110a6c:	e8 9d 55 fd ff       	call   80e600e <_ZNK5CUser17isAffectedPremiumE17ENUM_PREMIUM_TYPE>
 8110a71:	83 f0 01             	xor    $0x1,%eax
 8110a74:	84 c0                	test   %al,%al
 8110a76:	74 07                	je     8110a7f <_ZN13EventClassify15CPcRoomPlayTime25verifyUserPcRoomPlayEventEP5CUser+0x47>
 8110a78:	b8 07 00 00 00       	mov    $0x7,%eax
 8110a7d:	eb 2d                	jmp    8110aac <_ZN13EventClassify15CPcRoomPlayTime25verifyUserPcRoomPlayEventEP5CUser+0x74>
 8110a7f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8110a82:	89 04 24             	mov    %eax,(%esp)
 8110a85:	e8 62 03 00 00       	call   8110dec <_ZNK5CUser26getPcRoomPlayTimeRewardCntEv>
 8110a8a:	8b 55 08             	mov    0x8(%ebp),%edx
 8110a8d:	8b 52 1c             	mov    0x1c(%edx),%edx
 8110a90:	0f b6 52 10          	movzbl 0x10(%edx),%edx
 8110a94:	0f b6 d2             	movzbl %dl,%edx
 8110a97:	39 d0                	cmp    %edx,%eax
 8110a99:	0f 93 c0             	setae  %al
 8110a9c:	84 c0                	test   %al,%al
 8110a9e:	74 07                	je     8110aa7 <_ZN13EventClassify15CPcRoomPlayTime25verifyUserPcRoomPlayEventEP5CUser+0x6f>
 8110aa0:	b8 12 00 00 00       	mov    $0x12,%eax
 8110aa5:	eb 05                	jmp    8110aac <_ZN13EventClassify15CPcRoomPlayTime25verifyUserPcRoomPlayEventEP5CUser+0x74>
 8110aa7:	b8 00 00 00 00       	mov    $0x0,%eax
 8110aac:	c9                   	leave
 8110aad:	c3                   	ret

```

```c
// EventClassify::CPcRoomPlayTime::verifyUserPcRoomPlayEvent @ 0x8110a38

/* EventClassify::CPcRoomPlayTime::verifyUserPcRoomPlayEvent(CUser*) */

undefined4 __thiscall
EventClassify::CPcRoomPlayTime::verifyUserPcRoomPlayEvent(CPcRoomPlayTime *this,CUser *param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  
  cVar1 = (**(code **)(*(int *)this + 8))(this);
  if (cVar1 == '\x01') {
    cVar1 = CUser::isAffectedPremium(param_1,0xc);
    if (cVar1 == '\x01') {
      uVar3 = CUser::getPcRoomPlayTimeRewardCnt(param_1);
      if (uVar3 < *(byte *)(*(int *)(this + 0x1c) + 0x10)) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0x12;
      }
    }
    else {
      uVar2 = 7;
    }
  }
  else {
    uVar2 = 0xb2;
  }
  return uVar2;
}

```

